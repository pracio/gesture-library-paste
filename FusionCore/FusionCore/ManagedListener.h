#ifndef __MANAGED_LISTENER__
#define __MANAGED_LISTENR__

#include<Leap.h>
#include<LeapMath.h>
#include "NativeListener.h"

#pragma managed

using namespace Leap;
using namespace System;
using namespace System::Runtime::InteropServices;

namespace FusionCore{

	public delegate void ManagedCallback(NativeEventType);

	ref class ManagedListener
	{
	public:
		ManagedListener();
		ManagedListener(Controller &_m);
		~ManagedListener();
		!ManagedListener();
		ManagedCallback ^realCallback;
	private:
		NativeListener *rawListener=NULL;
		Controller *mCont = NULL;
		GCHandle gch;
		void onMessage(NativeEventType);
		void bindListener();
	};

}

#endif