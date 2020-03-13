#include "CSV.h"

CSV::CSV()
{

}

void CSV::read(const string &file_name)
{
    _data.read(file_name);
}
