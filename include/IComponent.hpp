/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** IComponents
*/

#pragma once

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

                virtual CompType getType() const = 0;
        };
    } // namespace ECS
};    // namespace Arcade
