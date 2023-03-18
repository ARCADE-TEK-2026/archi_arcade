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
        /**
         * @brief The IGraph interface
         *
         * System of the graphic lib will inherits from this
         */
        class IGraph : Arcade::ECS::ISystem {
            public:
                virtual ~IGraph() = default;

                virtual void run(std::size_t deltaTime, Arcade::ECS::IEntityManager &,
                Arcade::ECS::IEventManager &) override = 0;
        };
    } // namespace Graph
} // namespace Arcade
