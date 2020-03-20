#include <vector>

#include "Image.h"

Image::Image() :
    _data(),
    _label(Label::NONE)
{

}

Image::Image(const uint32 &width, const uint32 &height, uint8 *data) :
    _data(),
    _label(Label::NONE)
{
    cv::Mat channel_r(height, width, CV_8U, data);
    cv::Mat channel_g(height, width, CV_8U, data + width * height);
    cv::Mat channel_b(height, width, CV_8U, data + 2 * width * height);

    std::vector<cv::Mat> channels{ channel_b, channel_g, channel_r };

    merge(channels, _data);
    _data.convertTo(_data, CV_64F);
}

Image::Image(const string &path) :
    _data(),
    _label(Label::NONE)
{
    _data = cv::imread(path);
}

real64 Image::distFrom(const Image &other)
{
    return cv::norm(_data, other._data);
}

void Image::read(const string &path)
{
    _data = cv::imread(path);
}

Image Image::resize(const uint32 &new_width, const uint32 &new_height)
{   
    Image res;
    cv::resize(_data, res._data, cv::Size(new_width, new_height));

    return res;
}

void Image::show()
{ 
    cv::imshow("image", _data);
    cv::waitKey(0);
}
