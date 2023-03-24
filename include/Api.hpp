/*
** EPITECH PROJECT, 2023
** Archi Arcade Promo 2026 Toulouse
** File description:
** Api to access the lib in .so files
*/

#pragma once

#include "ISceneManager.hpp"
#include "ISystemManager.hpp"

#ifdef _WIN32
    #define EXPORT __declspec(dllexport)
#else
    #define EXPORT
#endif

/**
 * Each graphical library must call in one system the setMousePosition method of
 * EventManager
 */

extern "C"
{
    enum class LibType { GRAPH, GAME };

    /**
     * @brief The Games shared lib main entry point to get GameModule
     *
     * @return A ptr on IGameModule
     *
     * All game shared lib must have this function
     */
    EXPORT Arcade::Core::IGameModule *getScenes();

    /**
     * @brief The Graphs shared lib main entry point to get DisplayModule
     *
     * @return A ptr on IDisplayModule
     *
     * All graph shared lib must have this function
     */
    EXPORT Arcade::Core::IDisplayModule *getSystems();

    /**
     * @brief The Shared lib entry point to get lib name
     *
     * @return Lib's name in std::string
     *
     * All shared lib must have this function
     *
     */
    EXPORT std::string getName();

    /**
     * @brief The Shared lib entry point to get lib type
     *
     * @return LibType enum
     *
     * All shared lib must have this function
     *
     */
    EXPORT LibType getType();
}
