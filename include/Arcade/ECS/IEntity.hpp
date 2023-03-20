/*
** EPITECH PROJECT, 2023
** Archi Arcade Promo 2026 Toulouse
** File description:
** Entity is the most little thing in the ECS (you can add component to it)
*/

#pragma once

#include <cstddef>
#include <map>
#include <memory>
#include <string>
#include <vector>
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
                virtual std::string getId() const = 0;
                /**
                 * @brief Get all components
                 *
                 * @return The list of components
                 */
                virtual const std::map<CompType,
                std::vector<std::unique_ptr<IComponent>>> &
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
                /**
                 * @brief Remove a component
                 *
                 * @param std::string The component id to remove
                 */
                virtual void removeComponent(std::string id) = 0;
                /**
                 * @brief Remove all components of type `CompType`
                 *
                 * @param type The type of component to remove
                 */
                virtual void removeComponents(CompType type) = 0;
        };
    } // namespace ECS
} // namespace Arcade
