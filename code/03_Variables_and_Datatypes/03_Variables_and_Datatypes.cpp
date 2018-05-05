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
	 * Show declaration of a integer without initialization
	 * The value is not zero
	 *
	 * -> Variable Names are case sensitive !!
	 * -> Don't declare twice the same variable !!
	 */
	int myNumber;
	// int myNumber;
	cout << "myNumber not initialized: " << myNumber << endl;
	
	/*
	 * Show initalization of the integer
	 * --> = assignment operator
	 * --> When assigning a "float" number to a variable of data type "int", 
	 *     then all information behind the decimal point get's truncated
	 */
	myNumber = 5;
	// myNumber = 5.8;
	cout << "myNumber initialized: " << myNumber << endl;
	
	/*
	 * Show multi declaration and multi initialization
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
	 * Show declaration of a constant variable
	 * Must be initialized !!!!!
	 * Initialized value can not be altered at a later point of time
	 */
	// const int aStatic; // Causes error
	const int aStatic = 5;
	// aStatic = 5; // Causes error
	cout << "aStatic initialized: " << aStatic << endl;
	
	/*
	 * Show C++ 2011 Standard Feature allowing to auto determinate
	 * the data type of a variable through assignment
	 * Add compilation Flag -std=c++14
	 */
	auto myNumber2 = myNumber;
	cout << "Variable: myNumber2 contains assigned value from myNumber: " << myNumber2 << endl;
	
	return 0;
}