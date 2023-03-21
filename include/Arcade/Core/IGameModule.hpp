/*
** EPITECH PROJECT, 2023
** Archi Arcade Promo 2026 Toulouse
** File description:
** GameModule that will be passed to all systems, implemented in the core (it
** contains the Scene Manager created in the game lib)
*/

#pragma once

#include <string>
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
                virtual Arcade::Game::ISceneManager &getSceneManager() = 0;

                /**
                 * @brief Change the current active game to the given game
                 *
                 * @param gameName The game filename to change to (without .so)
                 *
                 * Throw on error
                 *
                 */
                virtual void changeGame(const std::string &gameName) = 0;

                /**
                 * @brief Change the current active game to the next (in a
                 * cyclic way)
                 *
                 * Throw on error
                 *
                 */
                virtual void changeGame() = 0;
        };
    } // namespace Core
} // namespace Arcade
