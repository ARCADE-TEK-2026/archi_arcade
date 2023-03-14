/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** IGraphh
*/

#ifndef IGRAPHH_HPP_
#define IGRAPHH_HPP_

#include <iostream>

namespace Arcade {
    class IGraphModule {
        public:
            virtual ~IGraphModule() = default;
            virtual void getMousePos() = 0;
            virtual void getEventQueue() = 0;
            virtual void display(IEntityModule *) = 0;
    };
}

#endif /* !IGRAPHH_HPP_ */
