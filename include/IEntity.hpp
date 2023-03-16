/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** IEntity
*/

#pragma once

#include <vector>
#include "IComponent.hpp"

namespace Arcade {
    namespace ECS {
        class IEntity {
            public:
                virtual ~IEntity() = default;
                /**
                 * @brief Get all components
                 *
                 * @return The list of components
                 */
                virtual const std::vector<IComponent *> &getComponents() = 0;
                /**
                 * @brief Get all components of type `compType`
                 *
                 * @param type The type of component to get
                 *
                 * @return The list of components filtered
                 */
                virtual const std::vector<IComponent *> &getComponents(Arcade::ECS::compType type) = 0;
                /**
                 * @brief Add a component
                 *
                 * @param component The component to add
                 */
                virtual void addComponent(IComponent *component) = 0;
        };
    }
} // namespace Arcade
