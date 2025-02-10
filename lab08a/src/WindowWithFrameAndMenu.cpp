#include "WindowWithFrameAndMenu.h"

void WindowWithFrameAndMenu::Draw(){
    WindowWithFrame::Draw();
    WindowWithMenu::Draw();
    Window::Draw();
}