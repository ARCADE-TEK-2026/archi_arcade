/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** ICore
*/

#ifndef ICORE_HPP_
    #define ICORE_HPP_

    #include <vector>
    #include "IEvent.hpp"

namespace Arcade {
    namespace Core {
        class ICore {
            public:
                virtual ~ICore() = 0;
                virtual void update() = 0;
        };
    }
}

#endif /* !ICORE_HPP_ */
