/*
** EPITECH PROJECT, 2023
** Archi Arcade Promo 2026 Toulouse
** File description:
** Systems are function that will run in every frame using the `run` method
*/

#pragma once

#include <cstddef>
#include "IEventManager.hpp"

namespace Arcade {
    namespace Core {
        class IDisplayModule;
        class IGameModule;
    } // namespace Core

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
                virtual void run(float deltaTime,
                    Arcade::ECS::IEventManager &eventManager,
                    Arcade::Game::IScene &currentScene) = 0;
        };
    } // namespace ECS
} // namespace Arcade
