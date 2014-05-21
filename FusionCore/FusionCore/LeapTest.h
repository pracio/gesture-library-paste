#ifndef __LEAP_TEST__
#define __LEAP_TEST__

#include <Leap.h>
#include <LeapMath.h>
#include "ManagedListener.h"
#pragma once

namespace FusionCore{

	using namespace Leap;

	ref class LeapTest
	{
	public:
		LeapTest();
		~LeapTest();
		!LeapTest();
		Controller* GetController();
		ManagedListener ^listener;
		void AddListener(ManagedCallback ^_m);

	private:
		Controller *mController;
	};
}
#endif