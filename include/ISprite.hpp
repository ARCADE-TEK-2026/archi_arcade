/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** ISprite
*/

#ifndef ISPRITE_HPP_
    #define ISPRITE_HPP_

    #include <string>
    #include "IRenderComp.hpp"

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

    struct Vector2f {
        float x;
        float y;
    };

    struct Vector3f {
        float x;
        float y;
    };

    class ISprite : public IRenderComp {
        public:
            virtual ~ISprite() = default;

            virtual const std::string& getPath2d() const = 0;

            virtual const std::string& getPath3d() const = 0;

            virtual const Graph::NcursesData& getNcurseData() const = 0;

            virtual const Vector2f& get2dPos() const = 0;
            virtual void set2dPos(Vector2f pos);

            virtual const Vector2f& get2dSize() const = 0;
            virtual void set2dSize(Vector2f size) = 0;

            virtual const Vector3f& get3dPos() const = 0;
            virtual void set3dPos(Vector3f pos) = 0;

            virtual const Vector3f& get3dSize() const = 0;
            virtual void set3dSize(Vector3f size) = 0;
    };
};

#endif /* !ISPRITE_HPP_ */
