/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** IGraphh
*/

#pragma once

#include <string>
#include "IComponent.hpp"

namespace Arcade {
    namespace Graph {
        class IMusic : IComponent {
            public:
                virtual ~IMusic() = default;

                virtual const std::string& getPath() const = 0;

                virtual bool getLoop() const = 0;
                virtual void setLoop(bool loop) = 0;

                virtual bool getIsPlaying() const = 0;
                virtual void setIsPlaying(bool isPlaying) = 0;

                virtual float getVolume() const = 0;
                virtual void setVolume(float volume) = 0;
        };
    }
};
