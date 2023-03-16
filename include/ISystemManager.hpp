/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** ISystem
*/

#pragma once

#include <string>
#include <vector>
#include "IEntity.hpp"
#include "ISystem.hpp"

namespace Arcade {
    class ISystemManager {
        public:
            virtual ~ISystemManager() = default;
            virtual void addSystem(const std::string &name, ISystem *system) = 0;
            virtual void removeSystem(const std::string &name) = 0;
            virtual void update(std::size_t deltaTime,
                    std::vector<IEntity *> entityList) = 0;
    };
}
