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
