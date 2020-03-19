#include <iostream>

#include "ImageIterator.h"

int main()
{
    ImageIterator it("C:/Users/asafa/Desktop/cifar-10-batches-bin/data_batch_1.bin");

    int i = 0;

    while(it.hasNext())
    {
        auto image = it.next();
        std::cout << i++ << ". " << static_cast<int>(image.getLabel()) << std::endl;
    }

    return 0;
}
