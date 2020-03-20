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
    std::vector<Image::Label> predict(const std::vector<Image> &images);
    real64 calcAccuracy(const std::vector<Image> &test_set);
    virtual Image::Label predict(const Image &image) = 0;
    virtual void train(const DataSet &data_set) = 0;

private:
    static std::vector<Image> sampleRandomly(std::vector<Image> &images, const uint32 &num);
};

