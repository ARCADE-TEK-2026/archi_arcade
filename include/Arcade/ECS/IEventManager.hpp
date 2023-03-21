/*
** EPITECH PROJECT, 2023
** Archi Arcade Promo 2026 Toulouse
** File description:
** Manager for the events that will be passed to the systems
*/

#pragma once

#include <memory>
#include <optional>
#include <queue>
#include <string>
#include <tuple>
#include "ArcadeStruct.hpp"
#include "IComponent.hpp"

namespace Arcade {
    namespace ECS {
        /**
         * @brief The IEventManager interface
         *
         * One EventManager to manage all events
         * some events can be created by systems (because events are string)
         * but some events are reserved by IGraph system:
         * "MOUSE_KEY1_PRESSED"
         * "MOUSE_KEY2_PRESSED"
         * "MOUSE_KEY3_PRESSED"
         * "MOUSE_KEY4_PRESSED"
         * "MOUSE_KEY5_PRESSED"
         * "KEY_A_PRESSED"
         * "KEY_B_PRESSED"
         * "KEY_C_PRESSED"
         * "KEY_D_PRESSED"
         * "KEY_E_PRESSED"
         * "KEY_F_PRESSED"
         * "KEY_G_PRESSED"
         * "KEY_H_PRESSED"
         * "KEY_I_PRESSED"
         * "KEY_J_PRESSED"
         * "KEY_K_PRESSED"
         * "KEY_L_PRESSED"
         * "KEY_M_PRESSED"
         * "KEY_N_PRESSED"
         * "KEY_O_PRESSED"
         * "KEY_P_PRESSED"
         * "KEY_Q_PRESSED"
         * "KEY_R_PRESSED"
         * "KEY_S_PRESSED"
         * "KEY_T_PRESSED"
         * "KEY_U_PRESSED"
         * "KEY_V_PRESSED"
         * "KEY_W_PRESSED"
         * "KEY_X_PRESSED"
         * "KEY_Y_PRESSED"
         * "KEY_Z_PRESSED"
         * "KEY_0_PRESSED"
         * "KEY_1_PRESSED"
         * "KEY_2_PRESSED"
         * "KEY_3_PRESSED"
         * "KEY_4_PRESSED"
         * "KEY_5_PRESSED"
         * "KEY_6_PRESSED"
         * "KEY_7_PRESSED"
         * "KEY_8_PRESSED"
         * "KEY_9_PRESSED"
         * "KEY_SPACE_PRESSED"
         * "KEY_ENTER_PRESSED"
         * "KEY_ESC_PRESSED"
         * "KEY_UP_PRESSED"
         * "KEY_DOWN_PRESSED"
         * "KEY_LEFT_PRESSED"
         * "KEY_RIGHT_PRESSED"
         * "KEY_TAB_PRESSED"
         * "KEY_BACKSPACE_PRESSED"
         * "KEY_DELETE_PRESSED"
         * "KEY_SHIFT_PRESSED"
         * "KEY_CTRL_PRESSED"
         * "KEY_ALT_PRESSED"
         * "KEY_F1_PRESSED"
         * "KEY_F2_PRESSED"
         * "KEY_F3_PRESSED"
         * "KEY_F4_PRESSED"
         * "KEY_F5_PRESSED"
         * "KEY_F6_PRESSED"
         * "KEY_F7_PRESSED"
         * "KEY_F8_PRESSED"
         * "KEY_F9_PRESSED"
         * "KEY_F10_PRESSED"
         * "KEY_F11_PRESSED"
         * "KEY_F12_PRESSED"
         * "WINDOW_CLOSE"
         * "WINDOW_RESIZE"
         * "WINDOW_MINIMIZE"
         *
         * "GAME_END" Is the event create by game system to tell core to quit
         * game
         */
        class IEventManager {
            public:
                virtual ~IEventManager() = default;

                /**
                 * @brief Check if there is no event trigered
                 *
                 * @return true if there is no event trigered
                 */
                virtual bool eventsIsEmpty() const = 0;
                /**
                 * @brief Check if an event was trigered
                 *
                 * @param event The event to check
                 *
                 * @return A pair of
                 * bool (True if the event was trigered, False if the event was
                 * not trigered) and std::optional<std::shared_ptr<IComponent>>
                 * (The parameter passed as parameter to `addEvent` method)
                 */
                virtual std::pair<bool,
                std::optional<std::shared_ptr<IComponent>>>
                isEventTriggered(const std::string &event) const = 0;
                /**
                 * @brief Add an event to list of trigered events
                 *
                 * @param event The event to add
                 * @param component The component to add as optional parameter
                 * with the event
                 */
                virtual void addEvent(const std::string &event,
                std::optional<std::shared_ptr<IComponent>> component =
                std::nullopt) = 0;
                /**
                 * @brief Remove all events from list of trigered events
                 */
                virtual void clearEvents() = 0;

                /**
                 * @brief Get the last known mouse position
                 *
                 * @return The last known mouse position
                 */
                virtual const Arcade::Vector2f &getMousePosition() const = 0;
                /**
                 * @brief Set the last known mouse position
                 *
                 * @param mousePosition The last known mouse position
                 */
                virtual void setMousePosition(
                const Arcade::Vector2f &mousePosition) = 0;
        };
    } // namespace ECS
} // namespace Arcade
