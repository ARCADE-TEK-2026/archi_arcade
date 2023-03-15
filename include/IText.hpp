/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** IText
*/

#ifndef ITEXT_HPP_
#define ITEXT_HPP_

#include <string>
#include "IRenderComp.hpp"

struct color;
struct vector2f;

namespace Arcade
{
    class IText : public IRenderComp {
      public:
        virtual ~IText() = default;

        virtual const std::string &getFontPath() const = 0;

        virtual const std::string &getText() const = 0;
        virtual void setText(std::string text) = 0;

        virtual const color &getBackgroundColor() const = 0;
        virtual void setBackgroundColor(color color) = 0;

        virtual const color &getForegroundColor() const = 0;
        virtual void setForegroundColor(color color) = 0;

        virtual float getPoliceSize() const = 0;
        virtual void setPoliceSize(float size) = 0;

        virtual const vector2f &getPos() const = 0;
        virtual void setPos(vector2f pos) = 0;
    };
}; // namespace Arcade

#endif /* !ITEXT_HPP_ */
