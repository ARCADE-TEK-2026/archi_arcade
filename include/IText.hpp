/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** IText
*/

#pragma once

#include <string>
#include "GraphStruct.hpp"
#include "IComponent.hpp"

namespace Arcade {
    namespace Graph {
        class IText : IComponent {
            public:
                virtual ~IText() = default;

                virtual const std::string &getFontPath() const = 0;

                virtual const std::string &getText() const = 0;
                virtual void setText(std::string text) = 0;

                virtual const Color &getBackgroundColor() const = 0;
                virtual void setBackgroundColor(Color color) = 0;

                virtual const Color &getForegroundColor() const = 0;
                virtual void setForegroundColor(Color color) = 0;

                virtual float getPoliceSize() const = 0;
                virtual void setPoliceSize(float size) = 0;

                virtual const Vector2f &getPos() const = 0;
                virtual void setPos(Vector2f pos) = 0;
        };
    } // namespace Graph
} // namespace Arcade
