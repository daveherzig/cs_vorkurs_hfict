/********************************************************
 * Organization: 	hf-ict.ch
 * Developer:		p.suetterlin@hf-ict.info
 * Date:			2018-06-06
 *
 * This program represents the solution to Excercise 7
 * pt.1 - Find the smallest number within 10 numbers entered
 * by the end user.
 *
 ********************************************************/
 
#include <iostream>
using namespace std;

int main() {

  // Declare Variables
  double z1, z2;
  
  // User enters the first number
  cout << "Please enter number #1: ";
  cin >> z1;
  
  for (int i = 2; i <=10; i++)
  {
	  cout << "Please enter number #" << i << ": ";
	  cin >> z2;
	  
	  // Check if z1 (previous winner) is bigger z2 (competitor)
	  if (z2 < z1)
	  {
		// Replace z1 with the smaller number z2
		z1 = z2;
	  }
  }

  // Write result to screen
  cout << "The smallest entered number is: " << z1;
  
  return 0;
}
