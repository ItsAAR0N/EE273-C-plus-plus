#ifndef VEHICLE
#define VEHICLE

#include <string>
using namespace std;

class Vehicle {
public:
	Vehicle();
	virtual ~Vehicle();
	void accel();
	void brake();
	string getBrand();
	string getregNum();
	string getColour();
	int getNumberOfWheels();
	double getSpeed();
	void setBrand(string brand);
	void setregNum(string regNum);
	void setColour(string colour);
	void setNumberOfWheels(int wheels);
private:
	string brand_;
	string regNum_;
	string colour_;
	int nWheels_;
	double speed_;
};

#endif
