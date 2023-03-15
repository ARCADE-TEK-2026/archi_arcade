
#pragma once

#include <string>
#include "IComponents.hpp"

struct ncursesData;
struct vector2f;
struct vector3f;

namespace Arcade {
    class ISprite : public IComponent {
        public:
            virtual std::string getPath2d();
            virtual std::string getPath3d();
            virtual ncursesData getNcurseData();
            virtual vector2f get2dPos();
            virtual vector2f get2dSize();
            virtual vector3f get3dPos();
            virtual vector3f get3dSize();
    };
};
