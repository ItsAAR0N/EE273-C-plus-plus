#include "Vehicle.hpp"

Vehicle::Vehicle()
{
	
}

Vehicle::~Vehicle()
{
	
}

void Vehicle::accel()
{
	speed_ += 3.0;
}
void Vehicle::brake()
{
	speed_ -= 3.0;
}
string Vehicle::getBrand()
{
	return brand_;
}
string Vehicle::getregNum()
{
	return regNum_;
}
string Vehicle::getColour()
{
	return colour_;
}
int Vehicle::getNumberOfWheels()
{
	return nWheels_;
}
double Vehicle::getSpeed()
{
	return speed_;
}
void Vehicle::setBrand(string brand)
{
	brand_ = brand;
}
void Vehicle::setregNum(string regNum)
{
	regNum_ = regNum;
}
void Vehicle::setColour(string colour)
{
	colour_ = colour;
}
void Vehicle::setNumberOfWheels(int wheels)
{
	nWheels_ = wheels;
}
