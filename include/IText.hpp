
#pragma once

#include <string>
#include "IRenderComp.hpp"

struct color;
struct vector2f;

namespace Arcade {
    class IText : public IRenderComp {
        public:
            std::string getFontPath();
            std::string getText();
            color getBackground();
            color getForeground();
            float getPoliceSize();
            vector2f getPos();
    };
};
