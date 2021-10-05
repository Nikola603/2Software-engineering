#include "HomeMode.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    MathCalculator::HomeMode home;
    Application::Run(% home);
}