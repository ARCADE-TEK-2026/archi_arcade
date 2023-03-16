/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** ISystem
*/

#pragma once

#include <cstddef>
#include <vector>
#include "IComponent.hpp"
#include "IEntity.hpp"
#include "IEventManager.hpp"

namespace Arcade {
    namespace ECS {
        class ISystem {
            public:
                virtual ~ISystem() = default;
                virtual void run(std::size_t deltaTime,
                std::vector<IEntity *> &, const IEventManager &) = 0;
        };
    } // namespace ECS
} // namespace Arcade
