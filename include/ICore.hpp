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
         * @brief The ICore class
         *
         * The ICore class is the main class of the project.
         * It has a ISystemManager and a IEventManager
         *
         * In constructor, Core must call checkName and checkLibType in each
         * shared lib in lib/ and build a map of type/name
         */
        enum class libType { GRAPH, GAME };
        class ICore {
            public:
                virtual ~ICore() = default;
                virtual void update() = 0;
        };
    } // namespace Core
} // namespace Arcade
