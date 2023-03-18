/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** ISystem
*/

#pragma once

#include <cstddef>
#include "IEntityManager.hpp"
#include "IEventManager.hpp"
#include "ISystem.hpp"

namespace Arcade {
    namespace Game {
        /**
         * @brief The IGameLogic interface
         *
         * System of the game will inherits from this
         */
        class IGameLogic : Arcade::ECS::ISystem {
            public:
                virtual ~IGameLogic() = default;
                virtual void run(std::size_t deltaTime, Arcade::ECS::IEntityManager &,
                Arcade::ECS::IEventManager &) override = 0;
        };
    } // namespace Game
} // namespace Arcade
