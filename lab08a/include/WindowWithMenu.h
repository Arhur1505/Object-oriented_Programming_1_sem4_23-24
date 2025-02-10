#ifndef WINDOWWITHMENU_H
#define WINDOWWITHMENU_H

#include <iostream>
#include "Window.h"

class WindowWithMenu : virtual public Window
{
public:
    /** @brief metod Draw
     *
     * @return nic nie zwraca
     */
    void Draw() override;
};

#endif