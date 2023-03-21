/*
** EPITECH PROJECT, 2023
** Archi Arcade Promo 2026 Toulouse
** File description:
** Manager for entity that add some usefull abstraction
*/

#pragma once

#include <memory>
#include <string>
#include "IEntity.hpp"

namespace Arcade {
    namespace ECS {
        /**
         * @brief Manage the creation of entities and their access
         */
        class IEntityManager {
            public:
                virtual ~IEntityManager() = default;
                /**
                 * @brief Add an entity to the manager
                 *
                 * @param id The id of the entity
                 *
                 * @return The entity created
                 */
                virtual IEntity &createEntity(const std::string &id) = 0;
                /**
                 * @brief Get all entities created by this manager
                 *
                 * @return A vector of all entities created by this manager
                 */
                virtual const std::vector<std::shared_ptr<IEntity>> &
                getEntities() const = 0;
                /**
                 * @brief Get all entities created by this manager that have at
                 * least one component of type CompType
                 *
                 * @param comp The component type to check in each entity
                 *
                 * @return The vector
                 */
                virtual std::unique_ptr<std::vector<std::shared_ptr<IEntity>>>
                getEntitiesByComponentType(CompType comp) const = 0;
                /**
                 * @brief Remove an entity from the manager
                 *
                 * @param id The entity id to remove
                 */
                virtual void removeEntity(std::string id) = 0;
                /**
                 * @brief Remove all entities from the manager
                 */
                virtual void removeAllEntities() = 0;
        };
    } // namespace ECS
} // namespace Arcade
