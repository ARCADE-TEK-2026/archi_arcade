/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** IGraphh
*/

#ifndef IGRAPHH_HPP_
    #define IGRAPHH_HPP_

    #include <vector>
    #include "IEvent.hpp"
    #include "IComponent.hpp"

namespace Arcade {
    namespace Graph {
        class IGraph {
            public:
                virtual ~IGraph() = 0;
                virtual void render(std::vector<IComponent *>) = 0;
                virtual std::vector<UserInputType> getUserInputs() const;
        };
    }
}

#endif /* !IGRAPHH_HPP_ */
