// Exercise 21.18: ex21_18.cpp
// This program determines if a value is a multiple of X.
#include <iostream>
using namespace std;

bool multiple( int );

int main()
{
   int y;

   cout << "Enter an integer between 1 and 32000: ";
   cin >> y;

   if ( multiple( y ) )
      cout << y << " is a multiple of X" << endl;
   else
      cout << y << " is not a multiple of X" << endl;
} // end main

// determine if number is a multiple of X
bool multiple( int number )
{
   bool isMultiple = true;

   for ( int i = 0, mask = 1; i < 10; i++, mask <<= 1 )

      if ( ( number & mask ) != 0 ) 
      {
         isMultiple = false;
         break;
      } // end if

   return isMultiple;
} // end function multiple


/**************************************************************************
 * (C) Copyright 1992-2010 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
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

