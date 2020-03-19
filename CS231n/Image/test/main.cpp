#include <iostream>
#include <fstream>

#include "Image.h"

int main()
{
    Image image("C:/Users/asafa/Desktop/dog2.jpg");

    std::cout << image.getWidth() << " " << image.getHeight() << " " << image.getNumOfChannels() << std::endl;

    image.show();

    return 0;
}
