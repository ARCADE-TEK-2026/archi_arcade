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
        /**
         * @brief The IMusic class
         *
         * The IMusic class is the class where you can manipulate Sounds and
         * Musics.
         * ATTENTION: This class is of CompType MUSIC
         */
        class IMusic : Arcade::ECS::IComponent {
            public:
                virtual ~IMusic() = default;

                /**
                 * @brief Get the path of the Music.
                 *
                 * @return The path of the Music.
                 */
                virtual const std::string &getPath() const = 0;

                /**
                 * @brief Check if the music is looping.
                 *
                 * @return The Loop data.
                 */
                virtual bool getLoop() const = 0;
                /**
                 * @brief Set the loop data.
                 */
                virtual void setLoop(bool loop) = 0;

                /**
                 * @brief Check if the music is currently played.
                 *
                 * @return The IsPlaying data.
                 */
                virtual bool getIsPlaying() const = 0;
                /**
                 * @brief Set the IsPlaying data.
                 */
                virtual void setIsPlaying(bool isPlaying) = 0;

                /**
                 * @brief Get the Volume data.
                 *
                 * @return The Volume data.
                 */
                virtual float getVolume() const = 0;
                /**
                 * @brief Get the Volume data.
                 */
                virtual void setVolume(float volume) = 0;
        };
    } // namespace Graph
} // namespace Arcade
