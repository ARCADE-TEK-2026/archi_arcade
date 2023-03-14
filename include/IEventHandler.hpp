/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** IEventHandler
*/

#ifndef IEVENTHANDLER_HPP_
#define IEVENTHANDLER_HPP_

#include "ISystem.hpp"
#include "IEntity.hpp"
#include "IEvent.hpp"

namespace Arcade {
    class IEventHandler {
        public:
            virtual ~IEventHandler() = default;
            virtual void handleEvent(std::list<IEventModule *>, std::list<IEntityModule *>) = 0;
            virtual void setEvent(std::list<ISystemModule *>) = 0;
    };
}

#endif /* !IEVENTHANDLER_HPP_ */
