#ifndef CAR
#define CAR
#include "Vehicle.hpp"

class Car : public Vehicle
{
public:
	Car();
	~Car();
	bool getWiperState();
	void toggleWiper();
private:
	bool wipersOn_;
};

#endif

