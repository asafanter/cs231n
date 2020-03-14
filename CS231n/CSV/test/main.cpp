#include <iostream>

#include "CSV.h"


int main()
{
    CSV csv;
    csv.read("C:/Users/asafa/Desktop/data.txt");

    auto data = csv.getData(0, 2, 0, 2);
    auto row = data.getCol(1);

    std::cout << row << std::endl;

    return 0;
}
