/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** ICore
*/

#ifndef ICORE_HPP_
#define ICORE_HPP_

#include <string>
#include "IGame.hpp"
#include "IGraph.hpp"

namespace Arcade {
    class ICoreModule {
        public:
            virtual ~ICoreModule() = default;
            virtual void update() = 0;
            virtual Arcade::IGameModule *getGameLibrary(const std::string &) = 0;
            virtual Arcade::IGraphModule *getGraphicalLibrary(const std::string &) = 0;
        private:
    };
}

#endif /* !ICORE_HPP_ */
