#include <iostream>
#include <fstream>

#include "CSV.h"

int main()
{
    CSV csv;
    csv.read("C:/Users/asafa/Desktop/hotel_bookings.csv");

    auto data = csv.getData();

    std::cout << data(5) << std::endl;

    return 0;
}
