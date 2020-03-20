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
    Label getLabel() const {return _label;}
    void setLabel(const Image::Label &new_label) {_label = new_label;}
    void read(const string &path);
    uint32 getWidth() const {return _data.size().width;}
    uint32 getHeight() const {return _data.size().height;}
    uint32 getNumOfChannels() const {return _data.channels();}
    Color &operator()(const uint32 &x, const uint32 &y) {return _data.at<cv::Vec3b>(cv::Point(x, y));}
    const Color &operator()(const uint32 &x, const uint32 &y) const {return _data.at<cv::Vec3b>(cv::Point(x, y));}
    Image resize(const uint32 &new_width, const uint32 &new_height);
    void show();

private:
    cv::Mat _data;
    Label _label;
};


