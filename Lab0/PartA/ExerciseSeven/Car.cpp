#include "Car.hpp"

Car::Car()
{
	
}
Car::~Car()
{
	
}
bool Car::getWiperState()
{
	return wipersOn_;
}
void Car::toggleWiper()
{
	wipersOn_ ^= 1;
}

