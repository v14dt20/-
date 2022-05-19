#include "Calc_valdt20.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Logvar10::Calc_valdt20 form;
	Application::Run(% form);
}