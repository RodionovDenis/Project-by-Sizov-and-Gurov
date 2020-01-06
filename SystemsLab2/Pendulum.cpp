#include "Pendulum.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SystemsLab2::Pendulum pendulum; //systemslab2 - имя проекта, pendulum - имя формы
	Application::Run(% pendulum);
}


