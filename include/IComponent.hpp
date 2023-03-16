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
        struct compType;

        class IComponent {
            public:
                virtual ~IComponent() = default;

                virtual compType getType() const = 0;
        };
    }
}; // namespace Arcade
