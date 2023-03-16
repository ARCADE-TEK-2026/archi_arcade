/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** IGame
*/

#ifndef IGAME_HPP_
    #define IGAME_HPP_

    #include <vector>
    #include "IEntity.hpp"
    #include "ISystem.hpp"

namespace Arcade {
    namespace Game {
        class IGame {
            public:
                virtual ~IGame() = 0;
                virtual bool isEnd() const = 0;
                virtual std::vector<IEntity *> &getEntities() const;
                virtual std::vector<ISystem *> &getSystems() const;
        };
    }
}

#endif /* !IGAME_HPP_ */
