/*
** EPITECH PROJECT, 2023
** Archi Arcade Promo 2026 Toulouse
** File description:
** GameModule that will be passed to all systems, implemented in the core (it
** contains the Scene Manager created in the game lib)
*/

#pragma once

#include <string>
#include "IEventManager.hpp"
#include "ISceneManager.hpp"

namespace Arcade {
    namespace Core {
        /**
         * @brief The IGameModule interface
         *
         * The IGameModule is passed to all systems
         */
        class IGameModule {
            public:
                virtual ~IGameModule() = default;

                /**
                 * @brief Get the scene manager of the current game
                 *
                 * @return The scene manager of the current game
                 */
                virtual std::shared_ptr<Arcade::Game::ISceneManager> getSceneManager() = 0;

                /**
                 * @brief Change the current active game to the given game
                 *
                 * @param gameName The game filename to change to (without .so)
                 *
                 * Throw on error
                 *
                 * Never call this directly in game systems, see documentation
                 * of EventManager for this purpose
                 * Why ? because this function can destroy the
                 *components/entities/systems you are on when you execute it
                 *
                 *!!!ATTENTION!!!: This function must be called only when you
                 *receive the event CHANGE_GAME, the param can be found in the
                 *component that can be linked to the event (in the core loop)
                 */
                virtual void changeGame(const std::string &gameName) = 0;

                /**
                 * @brief Change the current active game to the next (in a
                 * cyclic way)
                 *
                 * Throw on error
                 *
                 * Never call this directly in game systems, see documentation
                 * of EventManager for this purpose
                 * Why ? because this function can destroy the
                 *components/entities/systems you are on when you execute it
                 *
                 *!!!ATTENTION!!!: This function must be called only when you
                 *receive the event CHANGE_GAME, called when there is not param
                 *(in the core loop)
                 */
                virtual void changeGame() = 0;
                /**
                 * @brief Get Game Event Only Manager
                 *
                 * @return The event manager only used for game
                 */
                virtual std::shared_ptr<Arcade::ECS::IEventManager>getGameEventManager() = 0;
        };
    } // namespace Core
} // namespace Arcade
