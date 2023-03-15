
#pragma once

#include <string>
#include "IComponents.hpp"

namespace Arcade {
    class IMusic : public IComponent {
        public:
            std::string getPath();
            bool getLoop();
            bool getIsPlaying();
            float getVolume();
    };
};
