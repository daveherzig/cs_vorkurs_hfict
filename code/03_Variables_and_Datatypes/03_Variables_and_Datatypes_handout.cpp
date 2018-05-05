/********************************************************
 * Organization: 	hf-ict.ch
 * Developer:		p.suetterlin@hf-ict.info
 * Date:			2018-03-24
 *
 * This program implements variants of Variable declarations
 * and initializations.
 *
 ********************************************************/

#include<iostream>
using namespace std;

int main ()
{
	/*
	 * Declaration of a integer without initialization
	 */
	int myNumber;
	cout << "myNumber not initialized: " << myNumber << endl;
	
	/*
	 * Initalization of the integer
	 */
	myNumber = 5;
	cout << "myNumber initialized: " << myNumber << endl;
	
	/*
	 * Multiple declarations and initializations
	 */
	float a,b;
	float c = 1.6,d = 1.2;
	cout << "c: " << c << ",d: " << d << endl;
	
	/*
	 * Constructor Initialization & Uniform C++ 2011 initialization
	 */
	double aDouble(6);
	cout << "aDouble initialized by constructor: " << aDouble << endl;
	double bDouble {7};
	cout << "bDouble uniform initialization: " << bDouble << endl;
	
	/*
	 * Declaration of a constant variable
	 */
	const int aStatic = 5;
	cout << "aStatic initialized: " << aStatic << endl;
	
	/*
	 * C++ 2011/2014 Standard Feature allowing to auto determinate
	 * the data type of a variable through assignment
	 * Add compilation Flag -std=c++14
	 */
	auto myNumber2 = myNumber;
	cout << "Variable: myNumber2 contains assigned value from myNumber: " << myNumber2 << endl;
	
	return 0;
}