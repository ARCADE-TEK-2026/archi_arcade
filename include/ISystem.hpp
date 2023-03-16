/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** ISystem
*/

#ifndef ISYSTEM_HPP_
#define ISYSTEM_HPP_

#include <vector>
#include "IComponent.hpp"
#include "IEvent.hpp"
#include "IEntity.hpp"

namespace Arcade {
    class ISystem {
        public:
            virtual ~ISystem () = 0;
            virtual void run(std::vector<IEntity *> &, std::vector<UserInputType> &) = 0;
    };
}

#endif /* !ISYSTEM_HPP_ */
