// This is the main DLL file.

#include "stdafx.h"

#include "FusionCore.h"

namespace FusionCore{

	FusionCore::Engine::Engine(){
		mLeap = gcnew LeapTest();
		mLeap->AddListener(gcnew ManagedCallback(this->onMessage));
	}

	FusionCore::Engine::~Engine(){

	}

	void FusionCore::Engine::Start(){

	}

	void FusionCore::Engine::Stop(){

	}

	void FusionCore::Engine::onMessage(NativeEventType type){
		if (type == NativeEventType::OnServiceConnect || type == NativeEventType::OnConnect){
			System::String ^s = gcnew System::String("Connected");
			MessageBox::Show(s);
		}
	}
}