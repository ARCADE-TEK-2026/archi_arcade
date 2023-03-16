/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** ICore
*/

#pragma once

namespace Arcade {
    namespace Core {
        /**
         * @brief The Core class
         *
         * The Core class is the main class of the project.
         * It has a ISystemManager
         */
        class ICore {
          public:
            virtual ~ICore() = 0;
            virtual void update() = 0;
        };
    } // namespace Core
} // namespace Arcade