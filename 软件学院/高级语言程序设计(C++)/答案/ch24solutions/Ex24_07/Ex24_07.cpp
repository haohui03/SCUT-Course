// Exercise 24.7 Solution: Ex24_07.cpp
#include <iostream>  
using namespace std;

int main()
{
   const char c = 'A';
   const char *ptr = &c;

   cout << "c is " << *ptr;

   *const_cast< char * > ( ptr ) = 'Z';
   
   cout << "\nc is " << *ptr << endl;
} // end main


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
 **************************************************************************/
