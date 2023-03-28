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
         * defaultComponent type to implement: TEXT, SPRITE, MUSIC
         * !!!ATTENTION!!!
         * it must start like this (copy paste exactly in the same order):
         * ```cpp
         * enum class CompType: int {
         *     TEXT = 0,
         *     SPRITE = 1,
         *     MUSIC = 2,
         * };
         * ```
         * !!!ATTENTION!!!
         * To be hable to not have error. Because enum are int, and if game
         * has set a component type `POSITION = 4` and graph has set a component type
         * `SFSPRITE = 4`, the game if it will getEntitiesByComponentType(POSITION)
         * it will also get SFSPRITE (there are int 4 too)
         * To fix this problem:
         * - Graph : CompType range are from 0 to 100 (inclusive)
         * - Core : CompType range are from 101 to 200 (inclusive)
         * - Game : CompType range are from 201 to int max
         */
        enum class CompType;

        struct IComponent {
            public:
                virtual ~IComponent() = default;
                /**
                 * @brief Type of the component (it let you cast without
                 * headache)
                 */
                CompType type;
                /**
                 * @brief Name of the component
                 */
                std::string id;
        };
    } // namespace ECS
};    // namespace Arcade
