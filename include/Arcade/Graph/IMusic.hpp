/*
** EPITECH PROJECT, 2023
** Archi Arcade Promo 2026 Toulouse
** File description:
** A music child of components that will be understood by the graphic library
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
         * ATTENTION: You must have a parameter in your constructor
         * in order to set his id.
         */
        class IMusic : Arcade::ECS::IComponent {
            public:
                virtual ~IMusic() = default;
                /**
                 * @brief Get the Id object
                 *
                 * @return The Id of the Music.
                 */
                virtual const std::string &getId() const override = 0;
                /**
                 * @brief Get the path of the Music.
                 *
                 * @return The path of the Music.
                 */
                virtual const std::string &getPath() const = 0;
                /**
                 * @brief Set the path of the Music.
                 */
                virtual void setPath(const std::string &path) = 0;
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
