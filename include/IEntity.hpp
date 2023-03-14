/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** IEntity
*/

#ifndef IENTITY_HPP_
#define IENTITY_HPP_

#include <list>
#include "IComponents.hpp"

namespace Arcade {
    class IEntityModule {
        public:
            virtual ~IEntityModule() = default;
            virtual std::list<IComponents *> getComponents() = 0;
    };
}

#endif /* !IENTITY_HPP_ */
