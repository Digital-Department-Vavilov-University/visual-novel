#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {

    Application::SetCompatibleTextRenderingDefault(false);
    Application::EnableVisualStyles();
    Project13::MyForm form;
    Application::Run(% form);
    return 0;
}