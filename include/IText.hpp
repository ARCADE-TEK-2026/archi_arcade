
#pragma once

#include <string>
#include "IRenderComp.hpp"

struct color;
struct vector2f;

namespace Arcade {
    class IText : public IRenderComp {
        public:
            virtual ~IText() = default;

            virtual const std::string& getFontPath() const = 0;

            virtual const std::string& getText() const = 0;
            virtual void setText(std::string text) = 0;
 
            virtual const color& getBackgroundColor() const = 0;
            virtual void setBackgroundColor(color color) = 0;

            virtual const color& getForegroundColor() const = 0;
            virtual void setForegroundColor(color color) = 0;

            virtual float getPoliceSize() const = 0;
            virtual void setPoliceSize(float size) = 0;

            virtual const vector2f& getPos() const = 0;
            virtual void setPos(vector2f pos) = 0;
    };
};
