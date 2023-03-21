/*
** EPITECH PROJECT, 2023
** Archi Arcade Promo 2026 Toulouse
** File description:
** DisplayModule that let systems get this interface as parameter
*/

#pragma once

#include "ISystemManager.hpp"

namespace Arcade {
    namespace Core {
        /**
         * @brief The IDisplayModule interface
         *
         * The IDisplayModule is passed to all systems
         */
        class IDisplayModule {
            public:
                virtual ~IDisplayModule() = default;
                /**
                 * @brief Get the system manager of the current graphical
                 * library
                 *
                 * @return The system manager of the current graphical library
                 */
                virtual ECS::ISystemManager &getSystemManager() = 0;
                /**
                 * @brief Change the current active graphical library to the
                 * given graphical library
                 *
                 * @param libGraphicName The graphical library name (only the
                 * libname without .so)
                 *
                 * Throw on error
                 *
                 */
                virtual void changeGraphicLib(
                const std::string &libGraphicName) = 0;
                /**
                 * @brief Change the current active graphical library to the
                 * next one (in a cyclic way)
                 *
                 * (because the epitech subject says we can switch to the next
                 * graphical library in the folder of availible graphical
                 * library)
                 *
                 * Throw on error
                 *
                 */
                virtual void changeGraphicLib() = 0;
        };
    } // namespace Core
} // namespace Arcade
