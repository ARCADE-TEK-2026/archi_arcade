/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** IText
*/

#pragma once

#include <string>
#include "ArcadeStruct.hpp"
#include "GraphStruct.hpp"
#include "IComponent.hpp"

namespace Arcade {
    namespace Graph {
        class IText : Arcade::ECS::IComponent {
            public:
                virtual ~IText() = default;

                virtual const std::string &getFontPath() const = 0;

                virtual const std::string &getText() const = 0;
                virtual void setText(std::string text) = 0;

                virtual const Arcade::Graph::Color &
                getBackgroundColor() const = 0;
                virtual void setBackgroundColor(Arcade::Graph::Color color) = 0;

                virtual const Arcade::Graph::Color &
                getForegroundColor() const = 0;
                virtual void setForegroundColor(Arcade::Graph::Color color) = 0;

                virtual float getPoliceSize() const = 0;
                virtual void setPoliceSize(float size) = 0;

                virtual const Arcade::Vector2f &getPos() const = 0;
                virtual void setPos(Arcade::Vector2f pos) = 0;
        };
    } // namespace Graph
} // namespace Arcade
