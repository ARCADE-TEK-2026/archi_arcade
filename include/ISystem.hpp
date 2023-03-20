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
        /**
         * @brief The ISystem interface
         *
         * Systems will inherits from this
         */
        class ISystem {
            public:
                virtual ~ISystem() = default;

                /**
                 * @brief Run the system implementation
                 */
                virtual void run(std::size_t deltaTime, IEntityManager &,
                Arcade::ECS::IEventManager &) = 0;
                /**
                 * @brief Close the system implementation
                 */
                virtual void close() = 0;
        };
    } // namespace ECS
} // namespace Arcade
