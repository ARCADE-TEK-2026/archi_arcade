/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** IGraphh
*/

#pragma once

#include <vector>
#include "IEventManager.hpp"
#include "ISystem.hpp"

namespace Arcade {
    namespace Graph {
        class IGraph : ISystem {
            public:
                virtual ~IGraph() = default;
                virtual void run(
                std::vector<IEntity *> &, const IEventManager &) override = 0;
        };
    } // namespace Graph
} // namespace Arcade
