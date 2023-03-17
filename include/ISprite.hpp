/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** ISprite
*/

#pragma once

#include <string>
#include "ArcadeStruct.hpp"
#include "GraphStruct.hpp"
#include "IComponent.hpp"

namespace Arcade {
    namespace Graph {
        class ISprite : Arcade::ECS::IComponent {
            public:
                virtual ~ISprite() = default;

                virtual const std::string &getPath() const = 0;

                virtual const TTYData &getNcurseData() const = 0;

                virtual const Arcade::Vector3f &getPos() const = 0;
                virtual void setPos(Arcade::Vector3f pos) = 0;

                virtual const Arcade::Vector3f &getSize() const = 0;
                virtual void setSize(Arcade::Vector3f size) = 0;

                virtual Color &getColor() const = 0;

                virtual Rect &getRect() const = 0;

                virtual float &getScale() const = 0;
        };
    } // namespace Graph
} // namespace Arcade
