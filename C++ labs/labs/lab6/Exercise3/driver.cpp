//Eoin Goslin
//14320856


// Chapter 10 of C++ How to Program
// driver for vehicle
#include <iostream>

using std::cout;
using std::endl;

#include <vector>

using std::vector;

#include "vehicle.h"
#include "parkinglot.h"
#include "taxi.h"
#include "truck.h"

int main()
{
   Taxi *cab = new Taxi ( 3.3 );
   Truck *mack = new Truck( 7.54 );
   Truck *mack1 = new Truck( 8 );
   Truck *mack2 = new Truck( 13);
   Truck *mack3 = new Truck( 14);
   Truck *mack4 = new Truck( 15 );
   Truck *mack5= new Truck( 12 );
   Truck *mack6 = new Truck( 10 );
   Truck *mack7 = new Truck( 7 );
   Taxi *cab2 = new Taxi ( 7.4 );
   Taxi *cab3 = new Taxi ( 3.7 );



   ParkingLot parkinglot;
   parkinglot.addVehicle(cab);
   parkinglot.addVehicle(mack);
   parkinglot.addVehicle(mack1);
   parkinglot.addVehicle(mack2);
   parkinglot.addVehicle(mack3);
   parkinglot.addVehicle(mack4);
   parkinglot.addVehicle(mack5);
   parkinglot.addVehicle(mack6);
   parkinglot.addVehicle(mack7);
   parkinglot.addVehicle(cab2);
   parkinglot.addVehicle(cab3);




   //for(int i = 0; i < parkinglot.getVehicleCount();i++)
  // {

	   parkinglot.printVehicles();




   //}














   /* Write code to indicate that truck is carrying cargo */
   mack->setCargo(true);
   mack->hasCargo();

   /* Declare a vector, parkingLot, of base-class pointers */

   //Modify the driver program to place 10Vehicles in the parking lot.
   //create parking lot object








   //vector<Vehicle*> *ParkingLot = new vector<Vehicle*>();


   //ParkingLot.push_back(cab);

   //ParkingLot.push_back(mack);

   cout << "\nThe vehicles cannot get out of their parking spaces because of "
        << "traffic,\nso they respond: \n";




   //for (unsigned int i = 0; i < ParkingLot.size(); i++ ) {//unsigned int because

      /* Write code to call member function horn */



	   //ParkingLot[i]->horn();
	   //ParkingLot[i]->print();





      /* Write code to display information about the vehicle honking its horn */



   //} // end for
  // delete cab;
  // delete mack;

  // return 0;

} // end main



/**************************************************************************
 * (C) Copyright 1992-2003 by Deitel & Associates, Inc. and Prentice      *
 * Hall. All Rights Reserved.                                             *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
