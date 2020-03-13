#include <iostream>
#include <fstream>
#include <istream>
#include <ostream>

#include "CSVData.h"

CSVData::CSVData() :
    _rows(),
    _cols(),
    _num_of_rows(0),
    _num_of_cols(0)
{

}

CSVData::CSVData(const string &file_name) :
    _rows(),
    _cols(),
    _num_of_rows(0),
    _num_of_cols(0)
{
    read(file_name);
}

void CSVData::read(const string &file_name)
{
    std::fstream in(file_name, std::ios::in);
    if(!in.is_open())
    {
        std::cerr << "cannot open file: " << file_name << std::endl;
        return;
    }

    string line;
    while(in >> line)
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
    }
}

void CSVData::addRow(const std::vector<string> &row)
{
    if(row.size() != _num_of_cols)
    {
        std::cerr << "row size mismatch!" << std::endl;
        return;
    }

    _rows.emplace_back(row);
}

const std::vector<string> &CSVData::getRow(const uint32 &i) const
{
    if(i >= _num_of_rows)
    {
        throw "CSVData::getRow: invalid index";
    }

    return _rows[i];
}

const std::vector<string> &CSVData::getCol(const uint32 &i) const
{
    if(i >= _num_of_cols)
    {
        throw "CSVData::getCol: invalid index";
    }

    return _cols[i];
}

std::ostream &operator<<(std::ostream &out, const CSVData &data)
{
    for(auto &row : data._rows)
    {
        for(auto &val : row)
        {
            out << val << " ";
        }
        out << std::endl;
    }

    return out;
}

std::vector<string> CSVData::splitString(const string &str, const char &delimiter)
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
