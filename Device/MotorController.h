#pragma once
#include "Device.h"
#include "Input.h"
#include "Output.h"
class MotorController : public Device
{
public:
	MotorController(string name, string id);
	~MotorController();
	Input<bool> ip_digital;
	Output<bool> op_digital;
};

