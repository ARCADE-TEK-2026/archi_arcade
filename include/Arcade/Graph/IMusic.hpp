/*
** EPITECH PROJECT, 2023
** Archi Arcade Promo 2026 Toulouse
** File description:
** A music child of components that will be understood by the graphic library
*/

#pragma once

#include <string>
#include "IComponent.hpp"

namespace Arcade {
    namespace Graph {
        /**
         * @brief The IMusic class
         *
         * The IMusic class is the class where you can manipulate Sounds and
         * Musics.
         * ATTENTION: This class is of CompType MUSIC (you need to set the type
         * in order for the graphic to play it)
         */
        struct IMusic : public Arcade::ECS::IComponent {
            public:
                /**
                 * @brief Path of the Music
                 */
                std::string path;
                /**
                 * @brief Loop music
                 */
                bool loop;
                /**
                 * @brief Play music
                 */
                bool play;
        };
    } // namespace Graph
} // namespace Arcade
