#include <algorithm>

#include "KNN.h"

KNN::KNN() :
    _data(),
    _num_of_neighbors(0)
{

}

KNN::KNN(const uint32 &num_of_neighbors) :
    _data(),
    _num_of_neighbors(num_of_neighbors)
{

}

Image::Label KNN::predict(const Image &image)
{
    auto grades = calcDistfromImages(image);
    std::sort(grades.begin(), grades.end(), [](const Grade &grade1, const Grade &grade2)
    {
        return grade1.dist < grade2.dist;
    });

    return vote(grades);
}

void KNN::train(const std::vector<Image> &data)
{
    _data = data;
}

real64 KNN::l1Dist(const Image &image1, const Image &image2)
{
    real64 res = 0;
    for(uint32 x = 0; x < image1.getWidth(); x++)
    {
        for(uint32 y = 0; y < image1.getHeight(); y++)
        {
            auto color_diff = image1(x, y) - image2(x, y);
            res += (color_diff[0] + color_diff[1] + color_diff[2]);
        }
    }

    return res;
}

Image::Label KNN::vote(const std::vector<KNN::Grade> &grades)
{
    std::vector<uint32> hist(Image::NUM_OF_CLASSES);

    for(uint32 i = 0; i < _num_of_neighbors; i++)
    {
        hist[static_cast<int>(grades[i].label)]++;
    }

    return Image::Label::NONE;
}
