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
#include "IRenderComp.hpp"

namespace Arcade {
    namespace Graph {
        class IGraph {
            public:
                virtual ~IGraph() = default;
                virtual std::list<UserInputType> render(std::list<IRenderComp>) = 0;
        };
    }
}

#endif /* !IGRAPHH_HPP_ */
