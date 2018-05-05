/********************************************************
 * Organization: 	hf-ict.ch
 * Developer:		p.suetterlin@hf-ict.info
 * Date:			2018-03-24
 *
 * This program represents the solution to Excercise 4
 * pt.5
 *
 ********************************************************/

#include<iostream>
using namespace std;

int main ()
{
	// Declaration
	float a=4, b=2, c=16, d=8, x=2, y=4; 
	 
	// Equation #1
	float r1 = a/b - x/y;
	cout << "Result of Equation #1 = " << r1 << endl;
	
	// Equation #2
	float r2 = (a+b)/(a-b) - (x-y)/(x+y);
	cout << "Result of Equation #2 = " << r2 << endl;

	// Equation #3
	float r3 = a*x*x*x + b*x*x + c*x + d;
	cout << "Result of Equation #3 = " << r3 << endl;
	
	// Equation #4
	float r4 = 1/x + 2/x/x + 3/x/x/x + 4/x/x/x/x;
	cout << "Result of Equation #4 = " << r4 << endl;
	
	return 0;
}