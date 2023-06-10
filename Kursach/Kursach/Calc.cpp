#include "Calc.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(cli::array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Kursach::Calc form;
	Application::Run(% form);
}