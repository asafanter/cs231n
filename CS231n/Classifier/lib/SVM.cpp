#include "SVM.h"

SVM::SVM() :
    _lost_function()
{
    init();
}

Image::Label SVM::predict(const Image &image)
{
    return Image::Label::NONE;
}

void SVM::train(const std::vector<Image> &data)
{
    return;
}

void SVM::init()
{
    _lost_function = [](const cv::Mat &W, const std::vector<Image> &images) -> cv::Mat
    {
        cv::Mat X;
        for(auto &image : images)
        {
            X.push_back(image.getData());
        }

        auto scores = W * X;

        return scores;
    };
}
