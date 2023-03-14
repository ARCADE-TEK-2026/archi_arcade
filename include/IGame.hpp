/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** IGame
*/

#ifndef IGAME_HPP_
#define IGAME_HPP_

#include <iostream>
#include <unordered_map>
#include <vector>
#include "IEntity.hpp"
#include "ISystem.hpp"
#include "IEventHandler.hpp"

namespace Arcade {
    class IGameModule {
        public:
            virtual ~IGameModule() = default;
            virtual std::unordered_map<std::string, Arcade::ISystemModule *> initSystem() = 0;
            virtual std::vector<Arcade::IEntityModule *> getEntities() = 0;
            virtual Arcade::IEventHandler *initEventHandler() = 0;
    };
}

#endif /* !IGAME_HPP_ */
