#pragma once
#include <iostream>
#include <string>
using namespace std;
class Device {
public:
	Device(string name, string id) {
		_name = name;
		_id = id;
	}
	virtual ~Device() {};

	string GetName();
	string GetId();
private:
	string _name;
	string _id;
};

inline string Device::GetName() {
	return _name;
}

inline string Device::GetId() {
	return _id;
}