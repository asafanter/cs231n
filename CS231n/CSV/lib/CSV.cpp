#include <iostream>
#include <fstream>

#include "CSV.h"

CSV::CSV()
{

}

void CSV::read(const string &file_name)
{
    std::fstream in(file_name, std::ios::in);
    if(!in.is_open())
    {
        std::cerr << "cannot open file: " << file_name << std::endl;
        return;
    }

    string line = readLine(in);

    while(!line.empty())
    {
        auto row = splitString(line, ',');
        if(_num_of_cols == 0)
        {
            _num_of_cols = row.size();
            _cols.resize(_num_of_cols);
        }
        addRow(row);
        for(uint32 i = 0; i < _num_of_cols; i++)
        {
            _cols[i].emplace_back(row[i]);
        }
        _num_of_rows++;
        line = readLine(in);
    }
}

CSVData CSV::getData(const uint32 &from_col, const uint32 &to_col,
                     const uint32 &from_row, const uint32 &to_row)
{
    if(!isInputValid(from_col, to_col, from_row, to_row))
    {
        return CSVData();
    }

    CSVData res(&_cols, &_rows, from_col, to_col, from_row, to_row);

    return res;
}

std::vector<string> CSV::splitString(const string &str, const char &delimiter)
{
    std::vector<string> res;

    string token = "";
    auto *data = str.data();

    while(*data != '\0')
    {
        if(*data == delimiter)
        {
            res.emplace_back(token);
            token.clear();
        }
        else
        {
            token.push_back(*data);
        }
        data++;
    }

    if(!token.empty())
    {
        res.emplace_back(token);
    }

    return res;
}

void CSV::addRow(const std::vector<string> &row)
{
    if(row.size() != _num_of_cols)
    {
        std::cerr << "row size mismatch!" << std::endl;
        return;
    }

    _rows.emplace_back(row);
}

bool CSV::isInputValid(const uint32 &from_col, const uint32 &to_col, const uint32 &from_row, const uint32 &to_row) const
{
    if(from_col >= _num_of_cols || to_col >= _num_of_cols ||
            from_row >= _num_of_rows || to_row >= _num_of_rows)
    {
        std::cerr << "CSV::getData: invalid index" << std::endl;
        return false;
    }

    if(to_col < from_col || to_row < from_row)
    {
        std::cerr << "CSV::getData: argument 'from_row/col' should be larger than 'to_row/col'" << std::endl;
        return false;
    }

    return true;
}

string CSV::readLine(std::fstream &file)
{
    string res = "";

    char ch = '\0';
    while(ch != '\n')
    {
        file.read(&ch, 1);
        if(ch == '\0')
        {
            break;
        }
        else if(ch != '\n')
        {
            res.push_back(ch);
        }
    }

    return res;
}
