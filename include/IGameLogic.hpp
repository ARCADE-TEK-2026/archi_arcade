/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** ISystem
*/

#pragma once

#include <cstddef>
#include <vector>
#include "IEntity.hpp"
#include "IEventManager.hpp"
#include "ISystem.hpp"

namespace Arcade {
    namespace Game {
        class IGameLogic : Arcade::ECS::ISystem {
            public:
                virtual ~IGameLogic() = default;
                virtual void run(std::size_t deltaTime,
                std::vector<Arcade::ECS::IEntity *> &,
                const Arcade::IEventManager &) override = 0;
        };
    } // namespace Game
} // namespace Arcade
