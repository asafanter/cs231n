#ifndef KNN_H
#define KNN_H

#include "Image.h"
#include "Classifier.h"

class KNN : public Classifier
{
public:
    KNN();
    KNN(const uint32 &num_of_neighbors);
    void setNumOfNeighbors(const uint32 &new_num_of_neighbors) {_num_of_neighbors = new_num_of_neighbors;}
    uint32 getNumOfNeighbors() const {return _num_of_neighbors;}
    std::vector<Image> getData() {return _data;}
    const std::vector<Image> &getData() const {return _data;}
    virtual Image::Label predict(const Image &image) override;
    virtual void train(const std::vector<Image> &data) override;

private:
    struct Grade
    {
        Image::Label label;
        real64 dist;
    };

    std::vector<Grade> calcDistFromImages(const Image &image);
    Image::Label vote(const std::vector<Grade> &grades);
    real64 l2Dist(const Image &image1, const Image &image2);

private:
    std::vector<Image> _data;
    uint32 _num_of_neighbors;
};

#endif // KNN_H
