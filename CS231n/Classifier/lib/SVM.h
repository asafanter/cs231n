#ifndef SVM_H
#define SVM_H

#include <functional>

#include "Image.h"
#include "Classifier.h"

class SVM : public Classifier
{
public:

    using LostFunction = std::function<real64(const cv::Mat& x, const Image::Label &correct_label)>;

    explicit SVM(const uint32 &num_of_classes = 0);
    virtual Image::Label predict(const Image &image);
    virtual void train(const std::vector<Image> &data);
    void setLossFunction(const LostFunction &new_loss_function) {_loss_function = new_loss_function;}

private:
    static constexpr real64 DELTA = 1.0;

    void init();
    cv::Mat calcLoss(const std::vector<Image> &images);
    void initW(const uint32 &rows, const uint32 &cols);

private:
    LostFunction _loss_function;
    cv::Mat _w;
    uint32 _num_of_classes;
};

#endif // SVM_H
