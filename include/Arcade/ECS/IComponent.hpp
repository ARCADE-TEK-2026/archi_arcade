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
