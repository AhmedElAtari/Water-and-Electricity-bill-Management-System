
#include "Splash.h"
using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	
	Application::SetCompatibleTextRenderingDefault(false);

	Project3::Splash form;
	Application::Run(%form);
}


