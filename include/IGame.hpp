/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** IGame
*/

#ifndef IGAME_HPP_
#define IGAME_HPP_

#include <iostream>
#include <list>
#include <unordered_map>
#include <vector>
#include "IEvent.hpp"
#include "IRenderComp.hpp"

namespace Arcade {
    namespace Game {
        class IGame {
            public:
                virtual ~IGame() = default;
                virtual bool isEnd() = 0;
                virtual std::list<IRenderComp> update(std::list<UserInputType>) = 0;
        };
    }
}

#endif /* !IGAME_HPP_ */
