#pragma once
#include <Leap.h>
using namespace Leap;
class LeapMotionListener :
	public Listener
{
public:
	LeapMotionListener();
	~LeapMotionListener();
	void onInit(const Controller &);
	void onConnect(const Controller &);
	void onDisconnect(const Controller &);
	void onDeviceChange(const Controller &);
	void onExit(const Controller &);
	void onFocusGained(const Controller &);
	void onFocusLost(const Controller &);
	void onFrame(const Controller &);
	void onServiceConnect(const Controller &);
	void onServiceDisconnect(const Controller &);
};

