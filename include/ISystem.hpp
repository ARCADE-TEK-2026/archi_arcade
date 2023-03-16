/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** ISystem
*/

#pragma once

#include <vector>
#include "IComponent.hpp"
#include "IEntity.hpp"
#include "IEventManager.hpp"

namespace Arcade {
    class ISystem {
        public:
            virtual ~ISystem() = default;
            virtual void run(
            std::vector<IEntity *> &, const IEventManager &) = 0;
    };
} // namespace Arcade
