/*
** EPITECH PROJECT, 2023
** Archi Arcade Promo 2026 Toulouse
** File description:
** DisplayModule that let systems get this interface as parameter
*/

#pragma once

#include "ISystemManager.hpp"
#include "ArcadeStruct.hpp"

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
                 *!!!ATTENTION!!!: This function must be called only when you receive
                 * the event CHANGE_GRAPH, the param can be found in the component
                 * that can be linked to the event
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
                 * !!!ATTENTION!!!: This function must be called only when you receive
                 * the event CHANGE_GRAPH, this one is called if there is no param
                 *
                 */
                virtual void changeGraphicLib() = 0;
                /**
                 * @brief Get he size of the window
                 */
                virtual Arcade::Vector2f &getWindowSize() = 0;
                /**
                 * @brief Set the window size
                 *
                 * @param newSize The vector2f representing the new window size
                 */
                virtual void setWindowSize(const Arcade::Vector2f &newSize) = 0;
        };
    } // namespace Core
} // namespace Arcade
