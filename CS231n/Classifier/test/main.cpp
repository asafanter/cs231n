#include <iostream>

#include "Classifier.h"
#include "ImageIterator.h"

int main()
{
    ImageIterator it("C:/Users/asafa/Desktop/cifar-10-batches-bin/data_batch_1.bin");

    std::vector<Image> images;

    while(it.hasNext())
    {
        auto image = it.next();
        images.emplace_back(image);
    }

    Classifier::DataSet data_Set = Classifier::createDataSet(images);

    std::cout << static_cast<int>(data_Set.train[3].getLabel()) << std::endl;
    data_Set.train[3].show();

    return 0;
}
