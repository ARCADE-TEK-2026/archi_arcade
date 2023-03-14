/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** IComponents
*/

#ifndef ICOMPONENTS_HPP_
#define ICOMPONENTS_HPP_

namespace Arcade {
    //template <typename T>
    class IComponents {
        public:
            virtual ~IComponents() = default;
            virtual void setValue(IComponents *value) = 0;
            //virtual <T> getValue() = 0;
    };
}

#endif /* !ICOMPONENTS_HPP_ */
