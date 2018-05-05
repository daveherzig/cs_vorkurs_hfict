/********************************************************
 * Organization: 	hf-ict.ch
 * Developer:		p.suetterlin@hf-ict.info
 * Date:			2018-04-20
 *
 * This program represents the solution to Excercise 5
 * pt.1 - Heigth of a geostationary Satellite about earth's
 * surface.
 *
 ********************************************************/
 
 #include<iostream>
 #include<cmath>
 using namespace std;
 
 int main ()
 {
	 // Declare Variables and Constants
	 const double PI = 3.14159; // Ratio of a circle's circumference to the diameter
	 const int RADIUS_EARTH = 6371 * 1000; // 6371 km -> converted to m (x1000)
	 const double G = 9.80665; // Earth's gravitational acceleration in m/s^2
	 int T = 60 * 60 * 24; // The amount of seconds elapsing in one day
	 
	 int h = cbrt( pow(T, 2) * pow(RADIUS_EARTH, 2) * G / 4 / pow(PI, 2)) - RADIUS_EARTH;
	 // If the values T and RADIUS_EARTH are multiplied before power to 2 is applied...
	 // then the data type of variable T must be choosen as "long long int"
	 // This is necessary as the product of the two factors is exceeding the boundary
	 // of INT_MAX on most machines !
	 // 6371000 * 86400 = 550454400000 (it requires 40 bits to store this integer number)
	 // int h = cbrt( pow(T * RADIUS_EARTH, 2) * G / 4 / pow(PI, 2)) - RADIUS_EARTH;
	 h /= 1000;
	 
	 cout << "The geostationary heigth of the satellite is: " << h << " [km]" << endl;
	 
	 return 0;
 }