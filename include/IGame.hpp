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
#include "IEvent.hpp"

namespace Arcade {
    class IGameModule {
        public:
            virtual ~IGameModule() = default;
            virtual bool isEnd() = 0;
            virtual void update(std::list<eventType>) = 0;
    };
}

#endif /* !IGAME_HPP_ */
