#ifndef WINDOWWITHFRAMEANDMENU_H
#define WINDOWWITHFRAMEANDMENU_H

#include <iostream>
#include "WindowWithFrame.h"
#include "WindowWithMenu.h"

class WindowWithFrameAndMenu : public WindowWithMenu, public WindowWithFrame
{
public:
    /** @brief metod Draw
     *
     * @return nic nie zwraca
     */
    void Draw();
};

#endif