#ifndef SVM_H
#define SVM_H

#include <functional>

#include "Image.h"
#include "Classifier.h"

class SVM : public Classifier
{
public:

    using LostFunction = std::function<cv::Mat(const cv::Mat& W, const std::vector<Image>& image)>;

    SVM();
    virtual Image::Label predict(const Image &image);
    virtual void train(const std::vector<Image> &data);
    void setLostFunction(const LostFunction &new_lost_function) {_lost_function = new_lost_function;}

private:
    void init();

private:
    LostFunction _lost_function;
};

#endif // SVM_H
