/*
** EPITECH PROJECT, 2023
** Archi Arcade Promo 2026 Toulouse
** File description:
** Components to change lib game/graphic
*/

#ifndef ARCHI_ARCADE_CHANGELIBCOMP_HPP
#define ARCHI_ARCADE_CHANGELIBCOMP_HPP

#include "IComponent.hpp"

namespace Arcade {
    namespace ECS {
        /**
         * @brief The ChangeLibComp class
         *
         * The ChangeLibComp class is the class where you can change the
         * library of the game.
         * ATTENTION: This class is of CompType CHANGE_LIB
         */
        class ChangeLibComp : public Arcade::ECS::IComponent {
            public:
                virtual ~ChangeLibComp() = default;
                /**
                 * @brief Get the Id object
                 *
                 * @return The Id of the ChangeLibComp.
                 */
                virtual const std::string &getId() const override = 0;
                /**
                 * @brief Get the path of the library that will be loaded.
                 *
                 * @return The path of the library.
                 */
                virtual const std::string &getLibPath() const = 0;
                /**
                 * @brief Set the path of the library that you want to load.
                 */
                virtual void setLibPath(const std::string &path) = 0;
        };
    } // namespace ECS
} // namespace Arcade

#endif // ARCHI_ARCADE_CHANGELIBCOMP_HPP
