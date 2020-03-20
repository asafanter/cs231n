#include <iostream>

#include "Classifier.h"
#include "KNN.h"
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

    Classifier::DataSet data_set = Classifier::createDataSet(images);

    Image test_image = data_set.train[0];

    KNN knn(10);
    knn.train(data_set.train);

    std::cout << knn.calcAccuracy(data_set.test) << "%" << std::endl;

    return 0;
}
