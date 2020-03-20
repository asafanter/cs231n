#pragma once

#include <opencv2/opencv.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>

#include "../../types.h"

class Image
{
public:

    using Color = cv::Vec3b;
    static constexpr uint32 NUM_OF_CLASSES = 10;
    enum class Label
    {
        AIRPLANE,
        AUTOMOBILE,
        BIRD,
        CAT,
        DEER,
        DOG,
        FROG,
        HORSE,
        SHIP,
        TRUCK,
        NONE
    };

    Image();
    Image(const uint32 &width, const uint32 &height, uint8 *data);
    Image(const string &path);
    real64 distFrom(const Image &other);
    void read(const string &path);
    Image resize(const uint32 &new_width, const uint32 &new_height);

    void setLabel(const Image::Label &new_label) {_label = new_label;}
    uint32 getWidth() const {return _data.size().width;}
    uint32 getNumOfChannels() const {return _data.channels();}
    uint32 getHeight() const {return _data.size().height;}
    Color &operator()(const uint32 &x, const uint32 &y) {return _data.at<cv::Vec3b>(cv::Point(x, y));}
    const Color &operator()(const uint32 &x, const uint32 &y) const {return _data.at<cv::Vec3b>(cv::Point(x, y));}
    Label getLabel() const {return _label;}
    bool isEmpty() const {return _data.empty();}
    const cv::Mat getData() const {return _data;}
    void show();

private:
    cv::Mat _data;
    Label _label;
};


