/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** ISystem
*/

#pragma once

#include <vector>
#include "IComponent.hpp"
#include "IEventManager.hpp"
#include "IEntity.hpp"

namespace Arcade {
    class ISystem {
        public:
            virtual ~ISystem () = 0;
            virtual void run(std::vector<IEntity *> &, const IEventManager &) = 0;
    };
}
