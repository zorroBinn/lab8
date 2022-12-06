#include "Game.h"
#include <Windows.h>

using namespace lab8;


[STAThread] 

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew Game);
    return 0;
}