#include <iostream>
#include <fstream>
#include <istream>
#include <ostream>

#include "CSVExceptions.h"
#include "CSVData.h"

CSVData::CSVData() :
    _num_of_cols(0),
    _num_of_rows(0),
    _cols(nullptr),
    _rows(nullptr),
    _start_col(0),
    _end_col(0),
    _start_row(0),
    _end_row(0)
{

}

CSVData::CSVData(std::vector<std::vector<string> > *cols, std::vector<std::vector<string> > *rows,
                 const uint32 &start_col, const uint32 &end_col,
                 const uint32 &start_row, const uint32 &end_row) :
    _num_of_cols(end_col - start_col + 1),
    _num_of_rows(end_row - start_row + 1),
    _cols(cols),
    _rows(rows),
    _start_col(start_col),
    _end_col(end_col),
    _start_row(start_row),
    _end_row(end_row)
{

}

const string &CSVData::operator()(const uint32 &row, const uint32 &col) const
{
    if(row >= _num_of_rows || col >= _num_of_cols)
    {
        throw CSVInvalidIndex();
    }

    return (*_rows)[row + _start_row][col + _start_col];
}

string &CSVData::operator()(const uint32 &row, const uint32 &col)
{
    if(row >= _num_of_rows || col >= _num_of_cols)
    {
        throw CSVInvalidIndex();
    }

    return (*_rows)[row + _start_row][col + _start_col];
}

const string &CSVData::operator()(const uint32 &id) const
{
    if((_num_of_cols != 1 && _num_of_rows != 1) ||
            (_num_of_cols == 1 && id >= _num_of_rows) ||
            (_num_of_rows == 1 && id >= _num_of_cols))
    {
        throw CSVInvalidIndex();
    }

    if(_num_of_cols == 1)
    {
        return (*_rows)[id + _start_row][_start_col];
    }

    return (*_rows)[_start_row][id + _start_col];
}

string &CSVData::operator()(const uint32 &id)
{
    if((_num_of_cols != 1 && _num_of_rows != 1) ||
            (_num_of_cols == 1 && id >= _num_of_rows) ||
            (_num_of_rows == 1 && id >= _num_of_cols))
    {
        throw CSVInvalidIndex();
    }

    if(_num_of_cols == 1)
    {
        return (*_rows)[id + _start_row][_start_col];
    }

    return (*_rows)[_start_row][id + _start_col];
}

CSVData CSVData::getRow(const uint32 &row)
{
    if(!isRowValid(row))
    {
        return *this;
    }

    CSVData res(_cols, _rows, 0, _num_of_cols - 1, row, row);

    return res;
}

CSVData CSVData::getCol(const uint32 &col)
{
    if(!isColValid(col))
    {
        return *this;
    }

    CSVData res(_cols, _rows, col, col, 0, _num_of_rows - 1);

    return res;
}

bool CSVData::isRowValid(const uint32 &row) const
{
    if(row >= _num_of_rows)
    {
        std::cerr << "CSVData::getRow: invalid row index" << std::endl;
        return false;
    }

    return true;
}

bool CSVData::isColValid(const uint32 &col) const
{
    if(col >= _num_of_cols)
    {
        std::cerr << "CSVData::getRow: invalid col index" << std::endl;
        return false;
    }

    return true;
}

std::ostream &operator<<(std::ostream &out, const CSVData &data)
{

    for(uint32 row = 0; row < data._num_of_rows; row++)
    {
        for(uint32 col = 0; col < data._num_of_cols; col++)
        {
            out << data.operator()(row, col) << " ";
        }

        out << std::endl;
    }

    return out;
}
