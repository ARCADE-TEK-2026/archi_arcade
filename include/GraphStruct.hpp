/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** GraphStruct
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
        struct NcursesData {
            public:
                std::string pathAsciiArt;
                std::string defaultChar;
                Color foreground;
                Color background;
        };

        struct Vector2f {
            public:
                float x;
                float y;
                float z;
        };

        struct Vector3f {
            public:
                float x;
                float y;
                float z;
        };
    } // namespace Graph
} // namespace Arcade
