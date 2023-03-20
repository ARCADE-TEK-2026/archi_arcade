/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** ICore
*/

#pragma once

#include "ISystemManager.hpp"
#include "ISceneManager.hpp"

enum class libType { GRAPH, GAME };

extern "C"
{
    /**
     * @brief game shared lib main entry point to get scenes
     *
     * @return a unique_ptr on ISceneManager instance
     *
     * All game shared lib must have this function
     *
     */
    std::unique_ptr<Arcade::Game::ISceneManager> getScenes();

    /**
     * @brief graph shared lib main entry point to get systems
     *
     * @return a unique_ptr on ISystemManager instance
     *
     * All graph shared lib must have this function
     *
     */
    std::unique_ptr<Arcade::ECS::ISystemManager> getSystems();

    /**
     * @brief shared lib entry point to get lib name
     *
     * @return lib's name in std::string
     *
     * All shared lib must have this function
     *
     */
    std::string getName();

    /**
     * @brief shared lib entry point to get lib type
     *
     * @return libType enum
     *
     * All shared lib must have this function
     *
     */
    libType getType();
}
