/*
** EPITECH PROJECT, 2023
** Archi Arcade Promo 2026 Toulouse
** File description:
** Api to access the lib in .so files
*/

#pragma once

#include "IGameModule.hpp"
#include "IDisplayModule.hpp"

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
    enum LibType { GRAPH, GAME };

    /**
     * @brief The Games shared lib main entry point to get GameModule
     *
     * @return A ptr on IGameModule
     *
     * All game shared lib must have this function
     */
    EXPORT Arcade::Game::IGameModule *getGameModule();
    /**
     * @brief Destroy the GameModule created by getGameModule
     *
     * @param gameModule A ptr on IGameModule
     */
    EXPORT void destroyGameModule(Arcade::Game::IGameModule *gameModule);

    /**
     * @brief The Graphs shared lib main entry point to get DisplayModule
     *
     * @return A ptr on IDisplayModule
     *
     * All graph shared lib must have this function
     */
    EXPORT Arcade::Graph::IDisplayModule *getDisplayModule();
    /**
     * @brief Destroy the DisplayModule created by getDisplayModule
     *
     * @param displayModule A ptr on IDisplayModule
     */
    EXPORT void destroyDisplayModule(
    Arcade::Graph::IDisplayModule *displayModule);

    /**
     * @brief The Shared lib entry point to get lib name
     *
     * @return Lib's name in std::string
     *
     * All shared lib must have this function
     */
    EXPORT const char *getName();

    /**
     * @brief The Shared lib entry point to get lib type
     *
     * @return LibType enum
     *
     * All shared lib must have this function
     */
    EXPORT LibType getType();
}
