#include <iostream>

#include "CSV.h"


int main()
{
    CSV csv;
    csv.read("C:/Users/asafa/Desktop/data.txt");

    auto data = csv.getData();
    std::cout << data << std::endl;

    return 0;
}
