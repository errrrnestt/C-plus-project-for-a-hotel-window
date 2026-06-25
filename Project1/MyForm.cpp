#include "MyForm.h"
#include <Windows.h>

// ✨⊱✥━━━━━━━━━━━━━━━━━━━━━━━━━ ❧ ☙ ━━━━━━━━━━━━━━━━━━━━━━━━━✥⊰✨
// 🚀 APPLICATION ENTRY POINT (WinMain)
// ✨⊱✥━━━━━━━━━━━━━━━━━━━━━━━━━ ❧ ☙ ━━━━━━━━━━━━━━━━━━━━━━━━━✥⊰✨

// 💬 UA: назва вашого проекту
// ✨ EN: Name of your project namespace
using namespace Project1; 

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    // 🎨 Enable visual styles for the application windows controls
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    
    // 🏁 Run the main form of the application
    Application::Run(gcnew MyForm);
    return 0;
}