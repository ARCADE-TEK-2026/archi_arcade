/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** ISprite
*/

#ifndef ISPRITE_HPP_
    #define ISPRITE_HPP_

    #include <string>
    #include "IComponent.hpp"

namespace Arcade {
    namespace Graph {
        struct Color {
            int r;
            int g;
            int b;
        };
        struct NcursesData {
            std::string pathAsciiArt;
            std::string defaultChar;
            Color foreground;
            Color background;
        };
    }

    struct Vector3f {
        float x;
        float y;
        float z;
    };

    class ISprite : public IComponent {
        public:
            virtual ~ISprite() = default;

            virtual const std::string& getPath() const = 0;

            virtual const Graph::NcursesData& getNcurseData() const = 0;

            virtual const Vector3f& getPos() const = 0;
            virtual void setPos(Vector3f pos) = 0;

            virtual const Vector3f& getSize() const = 0;
            virtual void setSize(Vector3f size) = 0;

            virtual Graph::Color &getColor() const = 0;
    };
};

#endif /* !ISPRITE_HPP_ */
