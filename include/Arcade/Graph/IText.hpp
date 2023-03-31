/*
** EPITECH PROJECT, 2023
** Archi Arcade Promo 2026 Toulouse
** File description:
** A text child of components that will be understood by the graphic library
*/

#pragma once

#include <string>
#include "ArcadeStruct.hpp"
#include "GraphStruct.hpp"
#include "IComponent.hpp"

namespace Arcade {
    namespace Graph {
        /**
         * @brief The IText class
         *
         * The IText class is the class where you can manipulate text.
         *
         * ATTENTION: This class is of CompType TEXT (you need to set the type
         * in order for the graphic to play it)
         */
        struct IText : public Arcade::ECS::IComponent {
            public:
                /**
                 * @brief Font path
                 */
                std::string fontPath;
                /**
                 * @brief Text to display
                 */
                std::string text;
                /**
                 * @brief The background color
                 */
                Color backgroundColor;
                /**
                 * @brief The text color
                 */
                Color textColor;
                /**
                 * @brief The sprite position in 3Dimension (you can use only x
                 * and y if you want)
                 *
                 * Positions in Pixel, terminal graph libs handle ratio
                 */
                Arcade::Vector3f pos;
        };
    } // namespace Graph
} // namespace Arcade
