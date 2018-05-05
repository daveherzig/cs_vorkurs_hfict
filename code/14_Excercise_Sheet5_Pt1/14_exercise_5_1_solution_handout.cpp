/********************************************************
 * Organization: 	hf-ict.ch
 * Developer:		p.suetterlin@hf-ict.info
 * Date:			2018-04-20
 *
 * This program represents the solution to Excercise 5
 * pt.1 - Calculate the orbital period of a Satellite by 
 * its heigth.
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
	 double h;
	 
	 cout << "Enter the heigth of the satellite in orbit [km]: ";
	 cin >> h;
	 h *= 1000; // Multiply h with 1000 - equals h = h * 1000
	 
	 double time = 2 * PI / RADIUS_EARTH * sqrt( pow( RADIUS_EARTH + h, 3) / G);
	 // Convert time from seconds to hours
	 time /= 3600; // Divide time by 3600 - equals time = time * 3600
	 
	 cout << "The orbital period of the satellite is: " << time << " [h]" << endl;
	 
	 return 0;
 }