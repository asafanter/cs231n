#ifndef CSVDATA_H
#define CSVDATA_H

#include "types.h"

class CSVData
{
public:
    CSVData();
    CSVData(const string &file_name);


private:
    std::vector<std::vector<string>> _data;

};

#endif // CSVDATA_H
