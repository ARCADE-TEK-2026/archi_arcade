/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** IGraphh
*/

#ifndef IGRAPHH_HPP_
#define IGRAPHH_HPP_

#include <iostream>
#include "IEvent.hpp"
#include "IComponents.hpp"

namespace Arcade {
    class IGraphModule {
        public:
            virtual ~IGraphModule() = default;
            virtual std::list<eventType> render(std::list<IComponent>);
    };
}

#endif /* !IGRAPHH_HPP_ */
