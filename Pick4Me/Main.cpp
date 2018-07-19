// QuickPick Application
//
// Copyright (C) 2018 Tshenolo Matome::ProffD
//
// Distributed under the His_Softworks Software License, Version 1.0.
// Copying or duplicating this application is prohibited!.

#include "QuickPick.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Pick4Me::QuickPick form;
	Application::Run(%form);

}
