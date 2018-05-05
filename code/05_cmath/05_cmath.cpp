/********************************************************
 * Organization: 	hf-ict.ch
 * Developer:		p.suetterlin@hf-ict.info
 * Date:			2018-04-13
 *
 * Demo of the cmath library
 *
 ********************************************************/

#include<iostream>
#include<cmath>
using namespace std;

int main ()
{
	cout << "2 to the power of 2 = " << pow(2,2) << endl;
	cout << "2 to the power of 10 = " << pow(2,10) << endl;
	cout << "The square root of 625 = " << sqrt(625) << endl;
	cout << "The qubic root of 125 = " << cbrt(125) << endl;
	cout << "The 10th root of 1024 = " << pow(1024, 1.0/10) << endl;
	
	return 0;
}