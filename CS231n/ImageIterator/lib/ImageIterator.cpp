#include "ImageIterator.h"

ImageIterator::ImageIterator() :
    _path(),
    _file()
{

}

ImageIterator::ImageIterator(const string &path) :
    _path(path),
    _file()
{
    init();
}

void ImageIterator::setPath(const string &new_path)
{
    _path = new_path;
    init();
}

bool ImageIterator::hasNext()
{
    auto curr_pos = _file.tellg();
    return curr_pos <= _file_size - EXAMPLE_SIZE;
}

Image ImageIterator::next()
{
    uint8 data[IMAGE_SIZE];
    Image::Label label;

    _file.read(reinterpret_cast<char*>(&label), IMAGE_LABEL_SIZE);
    _file.read(reinterpret_cast<char*>(&data), IMAGE_SIZE);

    Image image(IMAGE_WIDTH, IMAGE_HEIGHT, data);
    image.setLabel(label);

    return image;
}

void ImageIterator::openFile()
{
    if(_path.empty())
    {
        std::cerr << "ImageIterator::openFile: no path set" << std::endl;
        return;
    }

    _file.open(_path, std::ios::in | std::ios::binary);
    if(!_file.is_open())
    {
        std::cerr << "ImageIterator::openFile: cannot open file: " << _path << std::endl;
    }
}

void ImageIterator::calcFileSize()
{
    _file.seekg(0, std::ios::end);
    _file_size = _file.tellg();
    _file.seekg(0, std::ios::beg);
}

void ImageIterator::init()
{
    openFile();
    calcFileSize();
}
