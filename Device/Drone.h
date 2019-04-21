#pragma once
#include "Device.h"
#include "MotorController.h"
class Drone : public Device
{
public:
	Drone(string name, string id);
	MotorController BLDCController;
};

