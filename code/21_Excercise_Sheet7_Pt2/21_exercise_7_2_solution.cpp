/********************************************************
 * Organization: 	hf-ict.ch
 * Developer:		p.suetterlin@hf-ict.info
 * Date:			2018-06-09
 *
 * This program represents the solution to Excercise 7
 * pt.2 - Find the greatest common divisor (GCD) for
 * two entered numbers. 
 *
 ********************************************************/
 
#include <iostream>
using namespace std;

int main() {

  // Declare Variables
  int a, b;
  
  // Prompt for (a) and (b)
  cout << "Please enter number a: ";
  cin >> a;
  cout << "Please enter number b: ";
  cin >> b;
  
  // Process the numbers as long not equal
  // The numbers can be equal from the start
  // or become equal after each performed loop
  while (a != b)
  {
	  if (a < b)
	  {
		// Case "a is smaller" | Subract smaller (a) from bigger (b)
		b -= a;
	  }
	  else
	  {
		// Case "b is smaller" | Subract smaller (b) from bigger (a)
		a -= b;
	  }
  }

  // Write result to screen (is does not matter which 
  // one to return a or b cause when this line of the 
  // code is reached both are same)
  cout << "The greatest common divisor is: " << a;
  
  return 0;
}
