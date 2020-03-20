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
    auto grades = calcDistFromImages(image);
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

std::vector<KNN::Grade> KNN::calcDistFromImages(const Image &image)
{
    std::vector<Grade> res;
    for(auto &data_image : _data)
    {
        Grade grade = {data_image.getLabel(), data_image.distFrom(image)};
        res.emplace_back(grade);
    }

    return res;
}

real64 KNN::l2Dist(const Image &image1, const Image &image2)
{
    real64 res = 0;
    for(uint32 x = 0; x < image1.getWidth(); x++)
    {
        for(uint32 y = 0; y < image1.getHeight(); y++)
        {
            int32 red_diff = static_cast<int32>(image1(x, y)[0] - image2(x, y)[0]);
            int32 green_diff = static_cast<int32>(image1(x, y)[1] - image2(x, y)[1]);
            int32 blue_diff = static_cast<int32>(image1(x, y)[2] - image2(x, y)[2]);

            res += (std::abs(red_diff) + std::abs(green_diff) + std::abs(blue_diff));
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

    return static_cast<Image::Label>(std::distance(hist.begin(),std::max_element(hist.begin(), hist.end())));
}
