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
                Color(int r, int g, int b, int a) : r(r), g(g), b(b), a(a) {}
                int r;
                int g;
                int b;
                int a;
        };
        struct TTYData {
            public:
                TTYData(std::string defaultChar, Color foreground, Color background) : defaultChar(defaultChar), foreground(foreground), background(background) {}
                std::string defaultChar;
                Color foreground;
                Color background;
        };
        struct Rect {
            public:
                Rect(int left, int top, int width, int height) : left(left), top(top), width(width), height(height) {}
                int left;
                int top;
                int width;
                int height;
        };
    } // namespace Graph
} // namespace Arcade
