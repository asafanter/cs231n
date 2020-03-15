#ifndef CSV_H
#define CSV_H

#include "CSVData.h"

class CSV
{
public:
    CSV();
    void read(const string & file_name);
    void write(const CSVData &_data, const string &file_name);
    CSVData getData(const uint32 &from_col, const uint32 &to_col, const uint32 &from_row, const uint32 &to_row);

private:
    std::vector<string> splitString(const string &str, const char &delimiter);
    void addRow(const std::vector<string> &row);
    bool isInputValid(const uint32 &from_col, const uint32 &to_col, const uint32 &from_row, const uint32 &to_row) const;
    string readLine(std::fstream &file);

private:
    std::vector<std::vector<string>> _rows;
    std::vector<std::vector<string>> _cols;
    uint32 _num_of_rows;
    uint32 _num_of_cols;
};

#endif // CSV_H
