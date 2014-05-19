#include <Leap.h>
#include <LeapMath.h>
#pragma once
class LeapTest
{
public:
	LeapTest();
	~LeapTest();
	void Initialize();
	void Start();
	void Stop();
private:
	Leap::Controller *mController;
};

