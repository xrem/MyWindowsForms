#include "MainForm.h"

using namespace MyWindowsForms;

[STAThreadAttribute]
void main() {
	MainForm mainForm;
	Application::Run(% mainForm);
}