#include "stdafx.h"
#include "LeapTest.h"

namespace FusionCore{

	LeapTest::LeapTest()
	{
		mController = new Controller();
		listener = gcnew ManagedListener(*mController);
	}


	LeapTest::~LeapTest()
	{
		this->!LeapTest();
	}

	LeapTest::!LeapTest(){
		delete mController;
	}

	Controller* LeapTest::GetController(){
		return mController;
	}

	void LeapTest::AddListener(ManagedCallback ^_m){
		listener->realCallback += _m;
	}

}