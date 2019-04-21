#include "MotorController.h"



MotorController::MotorController(string name, string id) :
	 Device(name, id)
	,ip_digital("Digital", "01")
	,op_digital("Digital", "02")
{

}


MotorController::~MotorController()
{
}
