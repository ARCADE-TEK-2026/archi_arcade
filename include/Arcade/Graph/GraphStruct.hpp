/*
** EPITECH PROJECT, 2023
** Archi Arcade Promo 2026 Toulouse
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
                int a;
        };
        struct TTYData {
            public:
                std::string defaultChar;
                Color foreground;
                Color background;
        };
        struct Rect {
            public:
                int left;
                int top;
                int width;
                int height;
        };
    } // namespace Graph
} // namespace Arcade
