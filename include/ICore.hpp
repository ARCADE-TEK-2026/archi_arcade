/*
** EPITECH PROJECT, 2023
** Archi Arcade Promo 2026 Toulouse
** File description:
** Core interface (in the arcade binary)
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
         * The core need to create a vector of availible graphical library and
         * game library using the default entryPoint defined in `Api.hpp`
         * (getType, getName) This will be passed to IGameModule and
         * IDisplayModule as vector of std::string
         */
        class ICore {
            public:
                virtual ~ICore() = default;
        };
    } // namespace Core
} // namespace Arcade
