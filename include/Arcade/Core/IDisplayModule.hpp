/*
** EPITECH PROJECT, 2023
** Archi Arcade Promo 2026 Toulouse
** File description:
** DisplayModule that let systems get this interface as parameter
*/

#pragma once

#include <memory>
#include <string>
#include "ArcadeStruct.hpp"
#include "IComponent.hpp"
#include "ISystemManager.hpp"

namespace Arcade {
    namespace Core {
        /**
         * @brief The IDisplayModule interface
         *
         * The IDisplayModule is passed to all systems
         */
        class IDisplayModule {
            public:
                virtual ~IDisplayModule() = default;
                /**
                 * @brief Get the system manager of the current graphical
                 * library
                 *
                 * @return The system manager of the current graphical library
                 */
                virtual std::shared_ptr<ECS::ISystemManager> getSystemManager() = 0;
                /**
                 * @brief Change the current active graphical library to the
                 * given graphical library
                 *
                 * @param libGraphicName The graphical library name (only the
                 * libname without .so)
                 *
                 * Throw on error
                 *
                 * Never call this directly in game systems, see documentation
                 * of EventManager for this purpose.
                 * Why ? because this function can destroy the
                 *components/entities/systems you are on when you execute it
                 *
                 *!!!ATTENTION!!!: This function must be called only when you
                 *receive the event CHANGE_GRAPH, the param can be found in the
                 *component that can be linked to the event (so, in core loop)
                 */
                virtual void changeGraphicLib(
                const std::string &libGraphicName) = 0;
                /**
                 * @brief Change the current active graphical library to the
                 * next one (in a cyclic way)
                 *
                 * (because the epitech subject says we can switch to the next
                 * graphical library in the folder of availible graphical
                 * library)
                 *
                 * Throw on error
                 * !!!ATTENTION!!!: This function must be called only when you
                 * receive the event CHANGE_GRAPH, this one is called if there
                 * is no param
                 *
                 * Never call this directly in game systems, see documentation
                 * of EventManager for this purpose
                 * Why ? because this function can destroy the
                 * components/entities/systems you are on when you execute it
                 *
                 */
                virtual void changeGraphicLib() = 0;
                /**
                 * @brief Add a component to the current active graphical
                 * library
                 *
                 * @param component The component to add
                 */
                virtual void addComponent(
                std::shared_ptr<ECS::IComponent> component) = 0;
                /**
                 * @brief Remove a component from the current active graphical
                 * library
                 *
                 * @param componentId The component id to remove
                 */
                virtual void removeComponent(
                const std::string &componentId) = 0;
                /**
                 * @brief Get the component of the current active graphical
                 * library
                 *
                 * @param componentId The component id to get
                 *
                 * @return optional of the component id if found
                 */
                virtual std::optional<std::shared_ptr<ECS::IComponent>>
                getComponent(const std::string &componentId) const = 0;
                /**
                 * @brief Get all components of type `compType`
                 *
                 * @param type The type of component to get
                 *
                 * @return The list of components filtered
                 */
                virtual const std::vector<std::shared_ptr<ECS::IComponent>> &
                getComponents(ECS::CompType type) const = 0;
                /**
                 * @brief Get he size of the window
                 */
                virtual Arcade::Vector2f &getWindowSize() = 0;
                /**
                 * @brief Set the window size
                 *
                 * @param newSize The vector2f representing the new window size
                 */
                virtual void setWindowSize(const Arcade::Vector2f &newSize) = 0;
        };
    } // namespace Core
} // namespace Arcade
