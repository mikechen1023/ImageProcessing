#include "MainForm.h"
#include "iostream"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	IPHW1::MainForm form;
	Application::Run(% form);

}