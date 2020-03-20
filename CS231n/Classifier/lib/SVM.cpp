#include "SVM.h"

SVM::SVM(const uint32 &num_of_classes) :
    _loss_function(),
    _w(),
    _num_of_classes(num_of_classes)
{
    init();
}

Image::Label SVM::predict(const Image &image)
{
    return Image::Label::NONE;
}

void SVM::train(const std::vector<Image> &data)
{
    initW(_num_of_classes, data[0].getSize());

    for(auto &image : data)
    {
        auto loss = calcLoss(image.getData().reshape(1, image.getSize()), image.getLabel());
        int koko = 7;
    }


    return;
}

void SVM::init()
{
    _loss_function = [this](const cv::Mat &x, const Image::Label &correct_label) -> real64
    {
        cv::Mat scores = _w * x;
        int32 label = static_cast<int32>(correct_label);

        cv::Mat margins = cv::max(0, scores - scores.at<real64>(cv::Point(label, 0)));
        margins.at<real64>(cv::Point(label, 0)) = 0;

        std::cout << margins << std::endl;

        return cv::sum(margins)[0];
    };

}

real64 SVM::calcLoss(const cv::Mat &x, const Image::Label &correct_label)
{
    return _loss_function(x, correct_label);
}

void SVM::initW(const uint32 &rows, const uint32 &cols)
{
    _w = cv::Mat(rows, cols, CV_64F);
    cv::randu(_w, 0, 1);
}
