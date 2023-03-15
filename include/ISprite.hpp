
#pragma once

#include <string>
#include "IRenderComp.hpp"

struct ncursesData;
struct vector2f;
struct vector3f;

namespace Arcade {
    class ISprite : public IRenderComp {
        public:
            virtual ~ISprite() = default;

            virtual const std::string& getPath2d() const = 0;

            virtual const std::string& getPath3d() const = 0;

            virtual const ncursesData& getNcurseData() const = 0;

            virtual const vector2f& get2dPos() const = 0;
            virtual void set2dPos(vector2f pos);

            virtual const vector2f& get2dSize() const = 0;
            virtual void set2dSize(vector2f size) = 0;

            virtual const vector3f& get3dPos() const = 0;
            virtual void set3dPos(vector3f pos) = 0;

            virtual const vector3f& get3dSize() const = 0;
            virtual void set3dSize(vector3f size) = 0;
    };
};
