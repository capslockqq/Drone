#pragma once
#include "Device.h"
template <class T>
class Input : public Device
{
public:
	Input(string name, string id);
	~Input();
	T GetValue();
	T* GetValueAddress();
	void SetValue(T value);
	void operator=(T *value) {
		_value = value;
	}
private:
	T* _value;
};

template <class T>
inline Input<T>::Input(string name, string id) :
	Device(name, id)
{
	T tmp = false;
	_value = &tmp;
}

template <class T>
inline Input<T>::~Input()
{
}
template <class T>
inline T Input<T>::GetValue() {
	return *_value;
}

template <class T>
T* Input<T>::GetValueAddress() {
	return _value;
}

template <class T>
inline void Input<T>::SetValue(T value) {
}


