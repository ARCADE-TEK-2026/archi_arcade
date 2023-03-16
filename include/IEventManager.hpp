/*
** EPITECH PROJECT, 2023
** Visual Studio Live Share (Workspace)
** File description:
** ISystem
*/

#ifndef IUSERINPUTMANAGER_HPP_
#define IUSERINPUTMANAGER_HPP_

#include <queue>
#include <string>

namespace Arcade {
    // enum class UserInputType {
    //     MOUSE_KEY1_PRESSED,
    //     MOUSE_KEY2_PRESSED,
    //     MOUSE_KEY3_PRESSED,
    //     MOUSE_KEY4_PRESSED,
    //     MOUSE_KEY5_PRESSED,
    //     KEY_A_PRESSED,
    //     KEY_B_PRESSED,
    //     KEY_C_PRESSED,
    //     KEY_D_PRESSED,
    //     KEY_E_PRESSED,
    //     KEY_F_PRESSED,
    //     KEY_G_PRESSED,
    //     KEY_H_PRESSED,
    //     KEY_I_PRESSED,
    //     KEY_J_PRESSED,
    //     KEY_K_PRESSED,
    //     KEY_L_PRESSED,
    //     KEY_M_PRESSED,
    //     KEY_N_PRESSED,
    //     KEY_O_PRESSED,
    //     KEY_P_PRESSED,
    //     KEY_Q_PRESSED,
    //     KEY_R_PRESSED,
    //     KEY_S_PRESSED,
    //     KEY_T_PRESSED,
    //     KEY_U_PRESSED,
    //     KEY_V_PRESSED,
    //     KEY_W_PRESSED,
    //     KEY_X_PRESSED,
    //     KEY_Y_PRESSED,
    //     KEY_Z_PRESSED,
    //     KEY_0_PRESSED,
    //     KEY_1_PRESSED,
    //     KEY_2_PRESSED,
    //     KEY_3_PRESSED,
    //     KEY_4_PRESSED,
    //     KEY_5_PRESSED,
    //     KEY_6_PRESSED,
    //     KEY_7_PRESSED,
    //     KEY_8_PRESSED,
    //     KEY_9_PRESSED,
    //     KEY_SPACE_PRESSED,
    //     KEY_ENTER_PRESSED,
    //     KEY_ESC_PRESSED,
    //     KEY_UP_PRESSED,
    //     KEY_DOWN_PRESSED,
    //     KEY_LEFT_PRESSED,
    //     KEY_RIGHT_PRESSED,
    //     KEY_TAB_PRESSED,
    //     KEY_BACKSPACE_PRESSED,
    //     KEY_DELETE_PRESSED,
    //     KEY_SHIFT_PRESSED,
    //     KEY_CTRL_PRESSED,
    //     KEY_ALT_PRESSED,
    //     KEY_F1_PRESSED,
    //     KEY_F2_PRESSED,
    //     KEY_F3_PRESSED,
    //     KEY_F4_PRESSED,
    //     KEY_F5_PRESSED,
    //     KEY_F6_PRESSED,
    //     KEY_F7_PRESSED,
    //     KEY_F8_PRESSED,
    //     KEY_F9_PRESSED,
    //     KEY_F10_PRESSED,
    //     KEY_F11_PRESSED,
    //     KEY_F12_PRESSED,
    //     WINDOW_CLOSE,
    //     WINDOW_RESIZE,
    //     WINDOW_MINIMIZE
    // };

    class IEventManager {
        public:
            virtual ~IEventManager() = default;

            virtual bool isEventInQueue(const std::string &event) const = 0;
            virtual void addEvent(const std::string &event) = 0;
            virtual std::queue<std::string> &popEvent() = 0;
    };
} // namespace Arcade

#endif
