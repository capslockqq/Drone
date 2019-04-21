#pragma once
#include "Device.h"
template <class T>
class Output : public Device {
public:
	Output(string name, string id);
	T GetValue();
	T* GetValueAddress();
	void SetValue(T value);
	void operator=(T *value) {
		_value = value;
	}
private:
	T dummyadress;
	T* _value;
};
template <class T>
inline Output<T>::Output(string name, string id) :
Device(name, id)
{
}

template <class T>
T Output<T>::GetValue() {
	return *_value;
}

template <class T>
T* Output<T>::GetValueAddress() {
	return _value;
}

template <class T>
void Output<T>::SetValue(T value) {
	if (!_value) {
		_value = &dummyadress;
	}
	*_value = value;
}