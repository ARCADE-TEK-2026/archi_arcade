/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** ISystem
*/

#pragma once

#include <cstddef>
#include "IComponent.hpp"
#include "IEntityManager.hpp"
#include "IEventManager.hpp"

namespace Arcade {
    namespace ECS {
        class ISystem {
            public:
                virtual ~ISystem() = default;

                /**
                * @brief Run the system implementation
                */
                virtual void run(std::size_t deltaTime, IEntityManager &,
                Arcade::IEventManager &) = 0;
        };
    } // namespace ECS
} // namespace Arcade
