#pragma once

#include "SDL2/SDL.h"
#include "Object.hpp"

class Rectangle : public Object {
public:
    Rectangle(double w, double h, double x = 0, double y = 0);
    
    virtual void update(double dt);
    virtual void draw() const;
    
    double getH() { return h; }
    double getW() { return w; }
    double getX() { return x; }
    double getY() { return y; }
    void setX(double x) { this->x = x; }
    void setY(double y) { this->y = y; }
    void setVelocity(double dx, double dy);
    void setColor(unsigned char red, unsigned char green, unsigned char blue);
    
private:
    double w;
    double h;
    double x;
    double y;
    double dx;
    double dy;
    unsigned char red;
    unsigned char green;
    unsigned char blue;
};
