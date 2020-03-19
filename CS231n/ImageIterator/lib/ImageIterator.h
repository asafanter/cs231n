#pragma once

#include <fstream>

#include "Image.h"

static constexpr uint32 IMAGE_WIDTH = 32;
static constexpr uint32 IMAGE_HEIGHT = 32;
static constexpr uint32 IMAGE_NUM_OF_CHANNELS = 3;
static constexpr uint32 IMAGE_LABEL_SIZE = 1;
static constexpr uint32 IMAGE_SIZE = IMAGE_WIDTH * IMAGE_WIDTH * IMAGE_NUM_OF_CHANNELS;
static constexpr uint32 EXAMPLE_SIZE = IMAGE_SIZE + IMAGE_LABEL_SIZE;

class ImageIterator
{
public:
    ImageIterator();
    ImageIterator(const string &path);
    void setPath(const string &new_path);
    bool hasNext();
    Image next();

private:
    void openFile();
    void calcFileSize();
    void init();

private:
    string _path;
    std::fstream _file;
    uint32 _file_size;
};

