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
            /**
             * @brief Add a system to the system manager
             *
             * @param name The name of the system
             * @param system The system to add
             */
            virtual void addSystem(
            const std::string &name, Arcade::ECS::ISystem *system) = 0;
            /**
             * @brief Remove a system from the system manager
             *
             * @param name The name of the system to remove
             */
            virtual void removeSystem(const std::string &name) = 0;
            /**
             * @brief Update all systems of the system manager
             *
             * @param deltaTime The time since the last update
             * @param entityList The list of entities
             */
            virtual void update(
            std::size_t deltaTime, std::vector<Arcade::ECS::IEntity *> entityList) = 0;
    };
} // namespace Arcade
