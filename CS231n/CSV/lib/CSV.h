#ifndef CSV_H
#define CSV_H

#include "CSVData.h"

class CSV
{
public:
    CSV();
    void read(const string & file_name);
    void write(const CSVData &_data, const string &file_name);
    CSVData getData() const {return _data;}

private:
    CSVData _data;
};

#endif // CSV_H
