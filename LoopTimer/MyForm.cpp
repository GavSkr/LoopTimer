#include "MyForm.h"

using namespace LoopTimer;

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ arg)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    LoopTimer::MyForm form;
    Application::Run(% form);
    return 0;
}

int LoopTimer::MyForm::checkTime(String^ f_hour)
{
    if (f_hour->Length == 0) f_hour = "0";
    int i_hour = System::Convert::ToInt32(f_hour);
    if (i_hour >= 60)
        i_hour = 60;
    if (i_hour <= 0)
        i_hour = 0;
    return i_hour;
    //throw gcnew System::NotImplementedException();
}