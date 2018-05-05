/********************************************************
 * Organization: 	hf-ict.ch
 * Developer:		p.suetterlin@hf-ict.info
 * Date:			2018-05-04
 *
 * This program represents the solution to Excercise 6
 * pt.1 - Evaluate if a entered year is a leap year
 *
 ********************************************************/
 
#include <iostream>
using namespace std;

int main() {

  // Allow the user to enter a year
  int year;
  cout << "Enter a year [Format: YYYY]: ";
  cin >> year;

  // Boolean Variable specifying if a year is a leap year
  // Initialized with false
  bool isLeapYear = false;
  
  // If year is divisible by 4 it might be a leap year ...
  // ... but not sure yet since it can still be no leap year if
  // the number of the year is divisible by 100 and not by 400
  if (year % 4 == 0)
  {
	  // If the year is divisible by 400 it is a leap year
	  if (year % 400 == 0)
	  {
		 isLeapYear = true;
	  }
	  // If the year is not divisible by 100 it is a leap year
	  else if (year % 100 != 0)
	  {
		 isLeapYear = true;
	  }
  }
  
  // Output using an inline if - pattern "(condition) ? (if_true) : (if_false)"
  cout << year << (isLeapYear ? " is a" : " is not a") << " leap year !!!" << endl;
  
  return 0;
}
