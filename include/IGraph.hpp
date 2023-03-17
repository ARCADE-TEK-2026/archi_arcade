/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** IGraphh
*/

#pragma once

#include <cstddef>
#include "IEntityManager.hpp"
#include "IEventManager.hpp"
#include "ISystem.hpp"

namespace Arcade {
    namespace Graph {
        class IGraph : Arcade::ECS::ISystem {
            public:
                virtual ~IGraph() = default;
                virtual void run(std::size_t deltaTime, Arcade::ECS::IEntityManager &,
                Arcade::IEventManager &) override = 0;
        };
    } // namespace Graph
} // namespace Arcade
