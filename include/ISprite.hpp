/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** ISprite
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
         */
        class ISprite : Arcade::ECS::IComponent {
            public:
                virtual ~ISprite() = default;

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
                virtual Color &getColor() const = 0;
                /**
                 * @brief Get the sprite rectangle.
                 *
                 * @return The Rect data.
                 */
                virtual Rect &getRect() const = 0;
                /**
                 * @brief Get the sprite Scale.
                 *
                 * @return The Scale data.
                 */
                virtual float &getScale() const = 0;
        };
    } // namespace Graph
} // namespace Arcade
