/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** ICore
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
                 * @param libGraphicPath The path of the graphical library to
                 * change to (.so)
                 *
                 * @return True if the graphical library was changed, false
                 * otherwise
                 */
                virtual bool changeGaphicLib(
                const std::string &libGraphicPath) = 0;
        };
    } // namespace Core
} // namespace Arcade
