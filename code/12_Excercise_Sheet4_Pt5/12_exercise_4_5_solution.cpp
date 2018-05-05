/********************************************************
 * Organization: 	hf-ict.ch
 * Developer:		p.suetterlin@hf-ict.info
 * Date:			2018-04-06
 *
 * This program calculates the circumference and the area 
 * enclosed of a circle with raduis r.
 *
 ********************************************************/

#include<iostream>
using namespace std;

int main () 
{
	const float PI = 3.1415;
	float r = 10.0;
	
	cout << "The circumference of the circle is: " << 2 * PI * r << " cm." << endl;
	cout << "The area enclosed by the circle is: " << PI * r * r << " cm^2." << endl;

	return 0;
}