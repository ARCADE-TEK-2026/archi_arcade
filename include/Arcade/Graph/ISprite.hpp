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
         */
        class ISprite : Arcade::ECS::IComponent {
            public:
                virtual ~ISprite() = default;

                virtual const std::string &getId() const override = 0;

                /**
                 * @brief Get the path of the Sprite
                 *
                 * @return The path of the Sprite
                 */
                virtual const std::string &getPath() const = 0;

                /**
                 * @brief Get the data to print when it's TTY.
                 *
                 * @return The TTY data.
                 */
                virtual const TTYData &getNcurseData() const = 0;

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
                virtual void setPos(Arcade::Vector3f pos) = 0;

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
                virtual void setSize(Arcade::Vector3f size) = 0;

                /**
                 * @brief Get the sprite Color.
                 *
                 * @return The Color data
                 */
                virtual const Color &getColor() const = 0;

                /**
                 * @brief Set the sprite Color.
                 */
                virtual void setColor(Color &color) = 0;
                /**
                 * @brief Get the sprite rectangle.
                 *
                 * @return The Rect data.
                 */
                virtual const Rect &getRect() const = 0;
                /**
                 * @brief Set the sprite rectangle.
                 */
                virtual void setRect(Rect &rect) = 0;
                /**
                 * @brief Get the sprite Scale.
                 *
                 * @return The Scale data.
                 */
                virtual const float &getScale() const = 0;
                /**
                 * @brief Set the sprite Scale.
                 */
                virtual void setScale(float &scale) = 0;
        };
    } // namespace Graph
} // namespace Arcade