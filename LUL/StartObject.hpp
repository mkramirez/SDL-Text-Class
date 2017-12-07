#pragma once

#include <vector>
#include "Object.hpp"
#include "Rectangle.hpp"
#include "Image.hpp"
#include "Font.hpp"

class StartObject : public Object {
public:
    StartObject();
    ~StartObject();
    virtual void update(double dt);
    virtual void draw() const {}
    
private:
    double elapsedSeconds;
    std::vector<Rectangle *> rectangles;
    std::vector<Image *> images;
    std::vector<Font *> fonts;
};
