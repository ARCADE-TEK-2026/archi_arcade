/*
** EPITECH PROJECT, 2023
** Archi Arcade Promo 2026 Toulouse
** File description:
** Scene are regroupments of entities and systems
*/

#pragma once

#include "IEntityManager.hpp"
#include "ISystemManager.hpp"

namespace Arcade {
    namespace Game {
        /**
         * @brief The IScene interface
         */
        class IScene {
            public:
                virtual ~IScene() = default;
                /**
                 * @brief Create the scene
                 *
                 * It exists because we don't want to create all
                 * entities/component at startup time but when the scene is
                 * activated
                 *
                 * @return True if the scene was created, false otherwise
                 */
                virtual bool init() = 0;
                /**
                 * @brief Close the scene
                 *
                 * It exists because we don't want to destroy all the scene
                 * (we might still need it, but we want to dealocate some
                 * resource maybe ?)
                 */
                virtual void close() = 0;
                /**
                 * @brief Get the entity manager of the scene
                 *
                 * !!!ATTENTION!!!: Shared_ptr is used instead of 'unique_ptr &'
                 * because of dereferencing unique_ptr
                 *
                 * @return The entity manager of the scene
                 */
                virtual std::shared_ptr<ECS::IEntityManager>getEntityManager() = 0;
                /**
                 * @brief Get the system manager of the scene
                 *
                 * @return The system manager of the scene
                 */
                virtual std::shared_ptr<ECS::ISystemManager>getSystemManager() = 0;
        };
    } // namespace Game
} // namespace Arcade
