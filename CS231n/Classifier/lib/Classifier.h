#pragma once

#include "Image.h"

class Classifier
{
public:

    struct DataSet
    {
        std::vector<Image> train;
        std::vector<Image> validation;
        std::vector<Image> test;
    };

    static DataSet createDataSet(const std::vector<Image> &images);
//    void train(const Dataset &data_set) = 0;
//    Image::Label predict(const Image &image) = 0;

private:
    static std::vector<Image> sampleRandomly(std::vector<Image> &images, const uint32 &num);
};

