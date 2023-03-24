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
        };
    } // namespace Game
} // namespace Arcade
