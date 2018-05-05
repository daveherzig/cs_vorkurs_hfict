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
  bool isLeapYear;
  
  // Check if year is a century year
  if (year % 100 == 0) 
  {	// The year *is* a century year
    // ... and if the century year is divisible by 400 --> then it's a leap year
    if (year % 400 == 0)
	{ 
		isLeapYear = true;
	}
    else 
	{
		isLeapYear = false;
	}
  } 
  else 
  { // The year *is not* a century year
    // ... and if the year is divisible by 4 --> then it is a leap year
    if (year % 4 == 0)
	{
		isLeapYear = true;
	}
    else 
	{
		isLeapYear = false;
	}
  }
  
  // Output using an inline if - pattern "(condition) ? (if_true) : (if_false)"
  cout << year << (isLeapYear ? " is a" : " is not a") << " leap year !!!" << endl;
  
  return 0;
}
