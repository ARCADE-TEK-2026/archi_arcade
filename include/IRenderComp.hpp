/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** IComponents
*/

#ifndef IRENDERCOMP_HPP_
#define IRENDERCOMP_HPP_

#include <cstddef>

namespace Arcade
{
    class IRenderComp {
      public:
        virtual ~IRenderComp() = default;

        virtual std::size_t getId() const = 0;
    };
}; // namespace Arcade

#endif /* !IRENDERCOMP_HPP_ */
