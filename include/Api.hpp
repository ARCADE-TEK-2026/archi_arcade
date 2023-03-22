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
    EXPORT enum class LibType { GRAPH, GAME };

    /**
     * @brief The game shared lib main entry point to get scenes
     *
     * @return A unique_ptr on ISceneManager instance
     *
     * All game shared lib must have this function
     *
     */
    EXPORT std::unique_ptr<Arcade::Game::ISceneManager> getScenes(std::unique_ptr<Arcade::Game::ISceneManager> sceneManager);

    /**
     * @brief The Graph shared lib main entry point to get systems
     *
     * @return A unique_ptr on ISystemManager instance
     *
     * All graph shared lib must have this function
     *
     */
    EXPORT std::unique_ptr<Arcade::ECS::ISystemManager> getSystems(std::unique_ptr<Arcade::ECS::ISystemManager> systemManager);

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
