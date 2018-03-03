//Eoin Goslin
//14320856

#include <vector>

#include "vehicle.h"

class ParkingLot {

public:
	ParkingLot();
	//~ParkingLot();

	void addVehicle( Vehicle * );
	void printVehicles() const;
	int getVehicleCount() const;

private:
	std::vector< Vehicle * > vehicles;
	int count;

}; 

