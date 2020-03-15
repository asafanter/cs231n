#include <iostream>

#include "CSV.h"

int main()
{
    CSV csv;
    csv.read("C:/Users/asafa/Desktop/hotel_bookings.csv");

    auto data = csv.getData(0, 31, 0, 31);
    auto row = data.getRow(1);

    row(0, 2) = "asaf";

    std::cout << row(0, 2) << std::endl;

    return 0;
}
