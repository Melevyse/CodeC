#include "Main.h"

using namespace System;
using namespace System::Windows::Forms;

void Main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	V9Multitude::Main form;
	Application::Run(%form);
}
