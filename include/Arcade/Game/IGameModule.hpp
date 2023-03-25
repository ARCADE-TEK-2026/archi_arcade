/*
** EPITECH PROJECT, 2023
** Archi Arcade Promo 2026 Toulouse
** File description:
** GameModule that will be passed to all systems, implemented in the core (it
** contains the Scene Manager created in the game lib)
*/

#pragma once

#include <string>
#include "IEntityManager.hpp"
#include "IEventManager.hpp"
#include "IScene.hpp"

namespace Arcade {
    namespace Game {
        /**
         * @brief The IGameModule interface
         *
         * This concret class will be created by the game .so and will be destroyed by the .so through
         * getGameModule() method and destroyGameModule() method
         */
        class IGameModule {
            public:
                virtual ~IGameModule() = default;

                /**
                 * @brief method that will be called each frame by the core
                 *
                 * You are expected to update the current scene in this method
                 *
                 * @param deltaTime time passed since last frame
                 * @param eventManager the event manager
                 */
                virtual void update(
                float deltaTime, Arcade::ECS::IEventManager &eventManager) = 0;
                /**
                 * @brief Get the entity manager of the current active scene
                 *
                 * @return The entity manager of the current active scene
                 */
                virtual Arcade::ECS::IEntityManager &
                getCurrentEntityManager() = 0;
        };
    } // namespace Game
} // namespace Arcade
