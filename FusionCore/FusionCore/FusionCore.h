// FusionCore.h
#ifndef __FUSION_CORE__
#define __FUSION_CORE__

#include "LeapTest.h"
#using<mscorlib.dll>
#using<System.Windows.Forms.dll> 

#pragma managed

using namespace System;
using namespace System::Windows::Forms;

namespace FusionCore {

	public ref class Engine
	{
	public:
		Engine();
		~Engine();
		void Start();
		void Stop();

	private:
		LeapTest ^mLeap;
		void onMessage(NativeEventType type);
	};
}

#endif