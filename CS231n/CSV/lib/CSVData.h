#pragma once

#include "types.h"

class CSVData
{
public:
    CSVData();
    CSVData(std::vector<std::vector<string>> *cols, std::vector<std::vector<string>> *rows,
            const uint32 &start_col, const uint32 &end_col,
            const uint32 &start_row, const uint32 &end_row);
    friend std::ostream &operator<<(std::ostream &out, const CSVData &data);
    const string &operator()(const uint32 &row, const uint32 &col) const;
    string &operator()(const uint32 &row, const uint32 &col);
    const string &operator()(const uint32 &id) const;
    string &operator()(const uint32 &id);
    CSVData getRow(const uint32 &row);
    CSVData getCol(const uint32 &col);

private:
    bool isRowValid(const uint32 &row) const;
    bool isColValid(const uint32 &col) const;

private:
    uint32 _num_of_cols;
    uint32 _num_of_rows;
    std::vector<std::vector<string>> *_cols;
    std::vector<std::vector<string>> *_rows;
    uint32 _start_col;
    uint32 _end_col;
    uint32 _start_row;
    uint32 _end_row;
};

