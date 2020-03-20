#include <iostream>

#include "Classifier.h"
#include "KNN.h"
#include "SVM.h"
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

//    Image test_image = data_set.train[0];
//    test_image.resize(10, 10);

//    KNN knn(5);
//    knn.train(data_set.train);

//    std::cout << knn.calcAccuracy(data_set.test) << "%" << std::endl;

    SVM svm;
    svm.train(data_set.train);

    return 0;
}
