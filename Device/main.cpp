#include <iostream>
#include "Device.h"
#include "Drone.h"

using namespace std;
template <typename T>
void connect(Output<T>&, Input<T>&);

int main() {

	Drone *drone = new Drone("Drone","1");
	cout << drone->GetName() << endl;
	cout << drone->BLDCController.GetName() << endl;
	cout << drone->BLDCController.ip_digital.GetName() << endl;
	bool value = true;

    cout << "value:" << drone->BLDCController.ip_digital.GetValue() << endl;
	drone->BLDCController.ip_digital = &value;

	cout << "value:" << drone->BLDCController.ip_digital.GetValue() << endl;
	value = false;
	cout << "value:" << drone->BLDCController.ip_digital.GetValue() << endl;

	drone->BLDCController.op_digital.SetValue(true);
	cout << "Input address before: " << drone->BLDCController.ip_digital.GetValueAddress() << endl;

	connect(drone->BLDCController.op_digital, drone->BLDCController.ip_digital);
	cout << "Input address after: " << drone->BLDCController.ip_digital.GetValueAddress() << endl;

	drone->BLDCController.op_digital.SetValue(false);

	cout << "value:" << drone->BLDCController.ip_digital.GetValue() << endl;

	return 0;
}
template <typename T>
void connect(Output<T> &output, Input<T> &input) {
	//cout << "Input address before: " << input.GetValueAddress() << endl;
	input = output.GetValueAddress();

	//cout << "Input address after: " << input.GetValueAddress() << endl;
}