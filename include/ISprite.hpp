/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** ISprite
*/

#pragma once

#include <string>
#include "GraphStruct.hpp"
#include "IComponent.hpp"

namespace Arcade {
    namespace Graph {
        class ISprite : public IComponent {
            public:
                virtual ~ISprite() = default;

                virtual const std::string &getPath() const = 0;

                virtual const NcursesData &getNcurseData() const = 0;

                virtual const Vector3f &getPos() const = 0;
                virtual void setPos(Vector3f pos) = 0;

                virtual const Vector3f &getSize() const = 0;
                virtual void setSize(Vector3f size) = 0;

                virtual Color &getColor() const = 0;
        };
    } // namespace Graph
} // namespace Arcade
