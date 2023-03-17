/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** IEntityManager
*/

#pragma once

#include <memory>
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
                 * @return The entity created
                 */
                virtual IEntity &createEntity() = 0;
                /**
                 * @brief Get all entities created by this manager
                 *
                 * @return A vector of all entities created by this manager
                 */
                virtual const std::vector<std::unique_ptr<IEntity>> &getEntities() const = 0;
                /**
                 * @brief Get all entities created by this manager that have at least one component of type CompType
                 *
                 * @param comp The component type to check in each entity
                 *
                 * @return The vector
                 */
                virtual const std::vector<std::unique_ptr<IEntity>> &getEntitiesByComponentType(CompType comp) const = 0;
        };
    }
}
