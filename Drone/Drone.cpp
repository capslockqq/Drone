#include "Drone.h"




Drone::Drone(string name, string id) :
Device(name, id)
, BLDCController("Motor controller","1")
{
}

