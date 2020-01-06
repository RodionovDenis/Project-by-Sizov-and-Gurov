#include "MyForm.h"
#include "Table.h"
#include <Windows.h>
#include <iostream>
using namespace TestPlots;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}

