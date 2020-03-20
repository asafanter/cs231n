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

std::vector<Image::Label> Classifier::predict(const std::vector<Image> &images)
{
    std::vector<Image::Label> res;
    for(auto &image : images)
    {
        res.emplace_back(predict(image));
    }

    return res;
}

real64 Classifier::calcAccuracy(const std::vector<Image> &test_set)
{
    uint32 true_positive_counter = 0;

    for(auto &image : test_set)
    {
        if(image.getLabel() == predict(image))
        {
            true_positive_counter++;
        }

    }

    std::cout << "got " << true_positive_counter << " from " << test_set.size() << std::endl;

    return static_cast<real64>(true_positive_counter) / test_set.size() * 100.0;
}

std::vector<Image> Classifier::sampleRandomly(std::vector<Image> &images, const uint32 &num)
{
    std::vector<Image> res;

    auto seed = std::chrono::high_resolution_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);

    for(uint32 i = 0; i < num; i++)
    {
        std::uniform_int_distribution<int> dist(0, images.size() - 1);

        auto random = dist(generator);
        res.emplace_back(images[random]);
        images.erase(images.begin() + random);
    }

    return res;
}
