#ifndef WINDOWWITHFRAME_H
#define WINDOWWITHFRAME_H

#include <iostream>
#include "Window.h"

class WindowWithFrame : virtual public Window
{
public:
    /** @brief metod Draw
     *
     * @return nic nie zwraca
     */
    void Draw() override;
};

#endif