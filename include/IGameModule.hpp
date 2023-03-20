/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** ISystem
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
                 * @param pathGame The game filename to change to (without .so)
                 *
                 * @return True if the game was changed, false otherwise
                 */
                virtual bool changeGame(const std::string &gameName) = 0;
        };
    } // namespace Core
} // namespace Arcade
