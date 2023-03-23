/*
** EPITECH PROJECT, 2023
** Archi Arcade Promo 2026 Toulouse
** File description:
** A sprite child of components that will be understood by the graphic library
*/

#pragma once

#include <string>
#include "ArcadeStruct.hpp"
#include "GraphStruct.hpp"
#include "IComponent.hpp"

namespace Arcade {
    namespace Graph {
        /**
         * @brief The ISprite class.
         *
         * The ISprite interface is the class where you can manipulate your
         * sprites.
         * ATTENTION: This class is of CompType SPRITE
         * ATTENTION: You must have a parameter in your constructor
         * in order to set his id.
         */
        class ISprite : Arcade::ECS::IComponent {
            public:
                virtual ~ISprite() = default;
                /**
                 * @brief Get the Id object
                 *
                 * @return The Id of the Sprite.
                 */
                virtual const std::string &getId() const override = 0;
                /**
                 * @brief Get the path of the Sprite
                 *
                 * @return The path of the Sprite
                 */
                virtual const std::string &getPath() const = 0;
                /**
                 * @brief set the path of the Sprite
                 */
                virtual void setPath(const std::string &path) = 0;
                /**
                 * @brief Get the data to print when it's TTY.
                 *
                 * @return The TTY data.
                 */
                virtual const TTYData &getTTYData() const = 0;
                /**
                 * @brief Set tty data
                 *
                 * @param ttyData The TTY data.
                 */
                virtual void setTTYData(const TTYData &ttyData) = 0;
                /**
                 * @brief Get the sprite position in 3Dimension.
                 *
                 * The positions data are in percentages.
                 *
                 * @return The path of the Sprite.
                 */
                virtual const Arcade::Vector3f &getPos() const = 0;
                /**
                 * @brief Set the sprite position in 3Dimension.
                 */
                virtual void setPos(const Arcade::Vector3f &pos) = 0;
                /**
                 * @brief Get the sprite size in 3Dimension.
                 *
                 * The size data is in percentages.
                 *
                 * @return The path of the Sprite.
                 */
                virtual const Arcade::Vector3f &getSize() const = 0;
                /**
                 * @brief Set the sprite size in 3Dimension.
                 */
                virtual void setSize(const Arcade::Vector3f &size) = 0;
                /**
                 * @brief Get the sprite Color.
                 *
                 * @return The Color data
                 */
                virtual const Color &getColor() const = 0;

                /**
                 * @brief Set the sprite Color.
                 */
                virtual void setColor(const Color &color) = 0;
                /**
                 * @brief Get the sprite rectangle.
                 *
                 * @return The Rect data.
                 */
                virtual const Rect &getRect() const = 0;
                /**
                 * @brief Set the sprite rectangle.
                 */
                virtual void setRect(const Rect &rect) = 0;
                /**
                 * @brief Get the sprite Scale.
                 *
                 * @return The Scale data.
                 */
                virtual float getScale() const = 0;
                /**
                 * @brief Set the sprite Scale.
                 */
                virtual void setScale(float scale) = 0;
        };
    } // namespace Graph
} // namespace Arcade
