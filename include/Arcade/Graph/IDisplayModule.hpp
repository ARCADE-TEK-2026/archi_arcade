/*
** EPITECH PROJECT, 2023
** Archi Arcade Promo 2026 Toulouse
** File description:
** DisplayModule that let systems get this interface as parameter
*/

#pragma once

#include "IEntityManager.hpp"
#include "IEventManager.hpp"

namespace Arcade {
    namespace Graph {
        /**
         * @brief The IDisplayModule interface
         *
         * IDisplayModule is the interface given by all graphical lib .so
         */
        class IDisplayModule {
            public:
                virtual ~IDisplayModule() = default;

                /**
                 * @brief function that will be called each frame by the core
                 *
                 * This function is called right after the `update` of the
                 * IGameModule
                 *
                 * @param eventManager the event manager (you must add events)
                 * @param entityManager the entity manager
                 */
                virtual void update(float delta,
                Arcade::ECS::IEventManager &eventManager,
                Arcade::ECS::IEntityManager &entityManager) = 0;
        };
    } // namespace Graph
} // namespace Arcade
