/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** IEntity
*/

#pragma once

#include <cstddef>
#include <memory>
#include <vector>
#include <map>
#include "IComponent.hpp"

namespace Arcade {
    namespace ECS {
        /**
         * @brief The IEntity interface
         */
        class IEntity {
            public:
                virtual ~IEntity() = default;
                /**
                 * @brief Get the entity id
                 *
                 * @return The entity id
                 */
                virtual std::size_t getId() const = 0;
                /**
                 * @brief Get all components
                 *
                 * @return The list of components
                 */
                virtual const std::map<CompType, std::vector<std::unique_ptr<IComponent>> &
                getComponents() = 0;
                /**
                 * @brief Get all components of type `compType`
                 *
                 * @param type The type of component to get
                 *
                 * @return The list of components filtered
                 */
                virtual const std::vector<std::unique_ptr<IComponent>> &
                getComponents(CompType type) = 0;
                /**
                 * @brief Add a component
                 *
                 * @param component The component to add
                 */
                virtual void addComponent(
                std::unique_ptr<IComponent> component) = 0;
        };
    } // namespace ECS
} // namespace Arcade
