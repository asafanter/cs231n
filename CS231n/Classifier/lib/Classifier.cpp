#include <random>
#include <chrono>

#include "Classifier.h"

Classifier::DataSet Classifier::createDataSet(const std::vector<Image> &images)
{
    DataSet res = {};

    auto set = images;

    res.train = sampleRandomly(set, 7000);
    res.validation = sampleRandomly(set, 1500);
    res.test = std::move(set);

    return res;
}

std::vector<Image> Classifier::sampleRandomly(std::vector<Image> &images, const uint32 &num)
{
    std::vector<Image> res;

    auto seed = std::chrono::high_resolution_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);

    for(uint32 i = 0; i < num; i++)
    {
        std::uniform_int_distribution<int> dist(1, images.size());

        auto random = dist(generator);
        res.emplace_back(images[random]);
        images.erase(images.begin() + random - 1);
    }

    return res;
}
