/*
** EPITECH PROJECT, 2023
** Arcade
** File description:
** Useful struct for the grapical lib
*/

#pragma once

#include <string>

namespace Arcade {
    namespace Graph {
        struct Color {
            public:
                int r;
                int g;
                int b;
        };
        struct TTYData {
            public:
                std::string pathAsciiArt;
                std::string defaultChar;
                Color foreground;
                Color background;
        };
    } // namespace Graph
} // namespace Arcade
