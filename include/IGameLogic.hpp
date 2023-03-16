/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** ISystem
*/

#pragma once

#include <vector>
#include "IEntity.hpp"
#include "IEventManager.hpp"
#include "ISystem.hpp"

namespace Arcade {
    namespace Game {
        class IGameLogic : ISystem {
            public:
                virtual ~IGameLogic() = default;
                virtual void run(
                std::vector<IEntity *> &, const IEventManager &) override = 0;
        };
    } // namespace Game
} // namespace Arcade
