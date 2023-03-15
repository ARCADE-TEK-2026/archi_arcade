
#pragma once

#include <string>
#include "IComponents.hpp"

struct color;
struct vector2f;

namespace Arcade {
    class IText : public IComponent {
        public:
            std::string getFontPath();
            std::string getText();
            color getBackground();
            color getForeground();
            float getPoliceSize();
            vector2f getPos();
    };
};
