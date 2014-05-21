#include "stdafx.h"
#include "ManagedListener.h"


namespace FusionCore{

	ManagedListener::ManagedListener()
	{
		
	}

	ManagedListener::ManagedListener(Controller & _m){
		mCont = &_m;
		bindListener();
	}

	void ManagedListener::bindListener(){
		ManagedCallback ^callback = gcnew ManagedCallback(this->onMessage);
		gch = GCHandle::Alloc(callback);
		IntPtr ptr = Marshal::GetFunctionPointerForDelegate(callback);
		OnMessage na_ptr = static_cast<OnMessage>(ptr.ToPointer());
		rawListener = new NativeListener(na_ptr);
		mCont->addListener(*rawListener);
	}

	void ManagedListener::onMessage(NativeEventType type){
		if (realCallback != nullptr){
			realCallback(type);
		}
	}

	ManagedListener::~ManagedListener()
	{
		this->!ManagedListener();
	}

	ManagedListener::!ManagedListener()
	{
		gch.Free();
		delete rawListener;
	}
}