#include "Zeidel.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	WhatDoesntKillYouMakeYouStronger::MyForm main_task;
	Application::Run(% main_task);
}

