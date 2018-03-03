//Eoin Gos
//14320856



// Chapter 10 of C++ How to Program
// driver for vehicle
#include <iostream>

using std::cout;
using std::endl;

#include <vector>

using std::vector;

#include "vehicle.h"
#include "taxi.h"
#include "truck.h"

int main()
{
   Taxi cab( 3.3 );
   Truck mack( 7.54 );

   /* Write code to indicate that truck is carrying cargo */
   mack.setCargo(true);
   mack.hasCargo();

   /* Declare a vector, parkingLot, of base-class pointers */
   vector<Vehicle*>ParkingLot(10);

   ParkingLot[ 0 ] = &cab;

   ParkingLot[ 1 ] = &mack;

   cout << "\nThe vehicles cannot get out of their parking spaces because of "
        << "traffic,\nso they respond: \n";




   for ( unsigned int i = 0; i < ParkingLot.size(); i++ ) {//unsigned int because

      /* Write code to call member function horn */
	   ParkingLot[i]->horn();
	   ParkingLot[i]->print();


      //*cab().horn();
      /*cout<<(*mack).horn();*/

      /* Write code to display information about the vehicle honking its horn */



   } // end for

   return 0;

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