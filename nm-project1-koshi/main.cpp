#include "decision.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	nmproject1koshi::decision decision; //nmproject1koshi - имя проекта, decision - имя формы
	Application::Run(% decision);
}

