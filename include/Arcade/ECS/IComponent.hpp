/*
** EPITECH PROJECT, 2023
** Archi Arcade Promo 2026 Toulouse
** File description:
** Components that will be added to entity
*/

#pragma once

#include <string>

namespace Arcade {
    namespace ECS {
        /**
         * @brief The IComponents interface
         *
         * defaultComponent type to implement: TEXT, SPRITE, MUSIC, CHANGE_LIB
         */
        enum class CompType;

        class IComponent {
            public:
                virtual ~IComponent() = default;

                /**
                 * @brief Get the type of the component.
                 *
                 * @return The component type (CompType)
                 */
                virtual CompType getType() const = 0;
                /**
                 * @brief Get the id of the component.
                 *
                 * @return The component id
                 */
                virtual const std::string &getId() const = 0;
        };
    } // namespace ECS
};    // namespace Arcade
