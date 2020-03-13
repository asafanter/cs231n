#pragma once

#include "types.h"

class CSVData
{
public:
    CSVData();
    CSVData(const string &file_name);
    void read(const string &file_name);
    void addRow(const std::vector<string> &row);
    const std::vector<string> &getRow(const uint32 &i) const;
    const std::vector<string> &getCol(const uint32 &i) const;
    friend std::ostream &operator<<(std::ostream &out, const CSVData &data);
    uint32 getNumOfRows() const {return _num_of_rows;}
    uint32 getNumOfCols() const {return _num_of_cols;}

private:
    std::vector<string> splitString(const string &str, const char &delimiter);

private:
    std::vector<std::vector<string>> _rows;
    std::vector<std::vector<string>> _cols;
    uint32 _num_of_rows;
    uint32 _num_of_cols;
};

