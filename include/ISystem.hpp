/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** ISystem
*/

#ifndef ISYSTEM_HPP_
#define ISYSTEM_HPP_

#include <list>
#include "IComponents.hpp"

namespace Arcade {
    class ISystemModule {
        public:
            virtual ~ISystemModule() = default;
            virtual void run(std::list<IEntityModule *>, IComponents *) = 0;
    };
}

#endif /* !ISYSTEM_HPP_ */
