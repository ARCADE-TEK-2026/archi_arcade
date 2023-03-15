
#pragma once

#include <string>
#include "IRenderComp.hpp"

namespace Arcade {
    class IMusic : public IRenderComp {
        public:
            std::string getPath();
            bool getLoop();
            bool getIsPlaying();
            float getVolume();
    };
};
