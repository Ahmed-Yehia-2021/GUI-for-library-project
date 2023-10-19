#include "MyForm1.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main1(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Liberary::MyForm1 form;
	Application::Run(% form);
}

