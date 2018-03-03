//Eoin Goslin
//14320856

#include <iostream>

using std::cout;
using std::endl;


#include "vehicle.h"
#include "parkinglot.h"
#include <vector>
using std::vector;


ParkingLot::ParkingLot()
{
	//vector< Vehicle * > vehicles;//as it is a vector,
	//do not want to set
	//limitation
	count = 0;

}



void ParkingLot::addVehicle( Vehicle * a )
{
	vehicles.push_back(a);
	count++;

}
void ParkingLot::printVehicles() const//because const here, we need to declare a const iterator
	{
	 for (vector<Vehicle*>::const_iterator i = vehicles.begin(); i !=vehicles.end();++i) //unsigned int because
		 {
			 (*i)->horn();
		 }
	}
	int ParkingLot::getVehicleCount() const
	{
		return count;

	}



