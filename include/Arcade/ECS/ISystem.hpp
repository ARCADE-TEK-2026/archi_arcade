/*
** EPITECH PROJECT, 2023
** Archi Arcade Promo 2026 Toulouse
** File description:
** Systems are function that will run in every frame using the `run` method
*/

#pragma once

#include <cstddef>
#include "IEntityManager.hpp"
#include "IEventManager.hpp"

namespace Arcade {
    namespace Game {
        class IGameModule;
    } // namespace Core
    namespace Graph {
        class IDisplayModule;
    } // namespace Graph

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
                virtual void run(double deltaTime,
                Arcade::ECS::IEventManager &eventManager,
                Arcade::ECS::IEntityManager &currentEntityManager) = 0;
        };
    } // namespace ECS
} // namespace Arcade
