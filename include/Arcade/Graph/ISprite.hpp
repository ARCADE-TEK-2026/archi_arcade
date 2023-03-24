/*
** EPITECH PROJECT, 2023
** Archi Arcade Promo 2026 Toulouse
** File description:
** A sprite child of components that will be understood by the graphic library
*/

#pragma once

#include <string>
#include "ArcadeStruct.hpp"
#include "GraphStruct.hpp"
#include "IComponent.hpp"

namespace Arcade {
    namespace Graph {
        /**
         * @brief The ISprite class.
         *
         * The ISprite interface is the class where you can manipulate your
         * sprites.
         * ATTENTION: This class is of CompType SPRITE (you need to set the type
         * in order for the graphic to play it)
         */
        struct ISprite : public Arcade::ECS::IComponent {
            public:
                /**
                 * @brief The path of the sprite
                 */
                std::string path;
                /**
                 * @brief Data for tty graphic lib to be hable to draw it
                 */
                TTYData ttyData;
                /**
                 * @brief The sprite position in 3Dimension (you can use only x
                 * and y if you want)
                 *
                 * Positions are in percentages. (0 -> 100)
                 */
                Arcade::Vector3f pos;
                /**
                 * @brief The sprite rect of one sprite in the spritesheet path
                 */
                Rect rect;
                /**
                 * @brief The index of the current sprite
                 *
                 * to get the rect of the current sprite:
                 * sprite.rect.left + (sprite.rect.width *
                 * sprite.currentRectIndex);
                 */
                int currentRectIndex;
        };
    } // namespace Graph
} // namespace Arcade
