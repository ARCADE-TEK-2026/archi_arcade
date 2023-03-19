/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** IComponents
*/

#pragma once

#include <cstddef>
namespace Arcade {
    namespace ECS {
        /**
         * @brief The IComponents interface
         *
         * defaultComponent type to implement: TEXT, SPRITE, MUSIC
         */
        struct CompType;

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
                virtual std::size_t getId() const = 0;
        };
    } // namespace ECS
};    // namespace Arcade
