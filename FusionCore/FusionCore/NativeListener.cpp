#include "stdafx.h"
#include "NativeListener.h"

namespace FusionCore{

	NativeListener::NativeListener() :onMessage(NULL)
	{
	}

	NativeListener::NativeListener(OnMessage cb) : onMessage(cb){

	}

	NativeListener::~NativeListener()
	{
	}

	void NativeListener::onConnect(const Controller & m){
		if (onMessage != NULL){
			onMessage(NativeEventType::OnConnect);
		}
	}

	void NativeListener::onDeviceChange(const Controller &m){
		if (onMessage != NULL){
			OnMessage(NativeEventType::OnDeviceChange);
		}
	}

	void NativeListener::onDisconnect(const Controller &m){
		if (onMessage != NULL){
			OnMessage(NativeEventType::OnDeviceChange);
		}
	}
	void NativeListener::onExit(const Controller &m){
		if (onMessage != NULL){
			OnMessage(NativeEventType::OnDeviceChange);
		}
	}
	void NativeListener::onFocusGained(const Controller &m){
		if (onMessage != NULL){
			OnMessage(NativeEventType::OnFocusGained);
		}
	}
	void NativeListener::onFocusLost(const Controller &m){
		if (onMessage != NULL){
			OnMessage(NativeEventType::OnFocusLost);
		}
	}
	void NativeListener::onFrame(const Controller &m){
		if (onMessage != NULL){
			OnMessage(NativeEventType::OnFrame);
		}
	}
	void NativeListener::onServiceConnect(const Controller &m){
		if (onMessage != NULL){
			OnMessage(NativeEventType::OnServiceConnect);
		}
	}
	void NativeListener::onServiceDisconnect(const Controller &m){
		if (onMessage != NULL){
			OnMessage(NativeEventType::OnServiceDisconnect);
		}
	}
}