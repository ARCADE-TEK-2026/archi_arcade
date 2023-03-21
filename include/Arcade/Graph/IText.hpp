/*
** EPITECH PROJECT, 2023
** Archi Arcade Promo 2026 Toulouse
** File description:
** A text child of components that will be understood by the graphic library
*/

#pragma once

#include <string>
#include "ArcadeStruct.hpp"
#include "GraphStruct.hpp"
#include "IComponent.hpp"

namespace Arcade {
    namespace Graph {
        /**
         * @brief The IText class
         *
         * The IText class is the class where you can manipulate text.
         * ATTENTION: This class is of CompType TEXT
         */
        class IText : Arcade::ECS::IComponent {
            public:
                virtual ~IText() = default;
                /**
                 * @brief Get the Id object
                 *
                 * @return The Id of the Text.
                 */
                virtual const std::string &getId() const override = 0;
                /**
                 * @brief Get the path of the text font.
                 *
                 * @return The path of the text font.
                 */
                virtual const std::string &getFontPath() const = 0;
                /**
                 * @brief Set the path of the text font.
                 */
                virtual void setFontPath(const std::string &path) = 0;
                /**
                 * @brief Get text to print.
                 *
                 * @return The text to print.
                 */
                virtual const std::string &getText() const = 0;
                /**
                 * @brief Set the text to print.
                 */
                virtual void setText(const std::string &text) = 0;
                /**
                 * @brief Get the background color.
                 *
                 * @return The background color.
                 */
                virtual const Arcade::Graph::Color &
                getBackgroundColor() const = 0;
                /**
                 * @brief Set the background color.
                 */
                virtual void setBackgroundColor(
                Arcade::Graph::Color &color) = 0;
                /**
                 * @brief Get the foreground color.
                 *
                 * @return The foreground color.
                 */
                virtual const Arcade::Graph::Color &
                getForegroundColor() const = 0;
                /**
                 * @brief Set the foreground color.
                 */
                virtual void setForegroundColor(
                Arcade::Graph::Color &color) = 0;
                /**
                 * @brief Get the police size.
                 *
                 * @return The police size.
                 */
                virtual float getPoliceSize() const = 0;
                /**
                 * @brief Set the police size.
                 */
                virtual void setPoliceSize(float size) = 0;
                /**
                 * @brief Get the text position.
                 *
                 * The positions data are in percentages.
                 *
                 * @return The text position.
                 */
                virtual const Arcade::Vector2f &getPos() const = 0;
                /**
                 * @brief Set the text position.
                 */
                virtual void setPos(Arcade::Vector2f &pos) = 0;
        };
    } // namespace Graph
} // namespace Arcade
