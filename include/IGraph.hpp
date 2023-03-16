/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** IGraphh
*/

#pragma once

#include <cstddef>
#include <vector>
#include "IEventManager.hpp"
#include "ISystem.hpp"

namespace Arcade {
    namespace Graph {
        class IGraph : Arcade::ECS::ISystem {
            public:
                virtual ~IGraph() = default;
                virtual void run(std::size_t deltaTime,
                std::vector<Arcade::ECS::IEntity *> &, const IEventManager &) override = 0;
        };
    } // namespace Graph
} // namespace Arcade
