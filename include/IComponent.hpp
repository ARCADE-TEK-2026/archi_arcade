/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** IComponents
*/

#ifndef IRENDERCOMP_HPP_
    #define IRENDERCOMP_HPP_

    #include <cstddef>

struct compType;

namespace Arcade {
    class IComponent {
        public:
            virtual ~IComponent() = 0;

            virtual compType getType() const = 0;
    };
};

#endif /* !IRENDERCOMP_HPP_ */
