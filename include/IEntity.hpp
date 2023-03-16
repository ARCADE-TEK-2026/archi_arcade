/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** IEntity
*/

#ifndef IENTITY_HPP_
#define IENTITY_HPP_

#include <vector>
#include "IComponent.hpp"

namespace Arcade {
    class IEntity {
        public:
            virtual ~IEntity() = 0;
            virtual std::vector<IComponent *> &getComponents() = 0;
    };
}

#endif /* !IENTITY_HPP_ */
