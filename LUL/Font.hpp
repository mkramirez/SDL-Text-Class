#pragma once
#include "Glyph.hpp"
#include <string>
#include "Frame.hpp"

class Font {
public:
    Font();
    ~Font() {delete [] pixels; }
    void draw(const std::string & text, double x, double y) const;
    
private:
    byte * pixels;
    int w;
    int h;
    friend class Frame;
};
