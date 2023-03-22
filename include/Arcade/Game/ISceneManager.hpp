/*
** EPITECH PROJECT, 2023
** Archi Arcade Promo 2026 Toulouse
** File description:
** Scene manager interface
*/

#pragma once

#include <memory>
#include "IScene.hpp"

namespace Arcade {
    namespace Game {
        /**
         * @brief Scene manager interface
         */
        class ISceneManager {
            public:
                virtual ~ISceneManager() = default;
                /**
                 * @brief Add a scene to the scene manager
                 *
                 * @param sceneName The name of the scene
                 * @param scene The scene to add
                 */
                virtual void registerScene(const std::string &sceneName,
                std::unique_ptr<IScene> scene) = 0;
                /**
                 * @brief Get the current active scene
                 *
                 * @return The current active scene
                 */
                virtual std::unique_ptr<IScene> &getCurrentScene() = 0;
                /**
                 * @brief Change the current active scene
                 *
                 * @param sceneName The name of the scene to change to
                 */
                virtual void changeScene(const std::string &sceneName) = 0;
        };
    } // namespace Game
} // namespace Arcade
