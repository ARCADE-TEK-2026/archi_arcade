/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** IGraphh
*/

#ifndef IGRAPHH_HPP_
    #define IGRAPHH_HPP_

    #include <vector>
    #include "IEventManager.hpp"
    #include "ISystem.hpp"

namespace Arcade {
    namespace Graph {
        class IGraph : ISystem {
            public:
                virtual ~IGraph() = 0;
                virtual void run(std::vector<IEntity *> &, const IEventManager &) override;
        };
    }
}

#endif /* !IGRAPHH_HPP_ */
