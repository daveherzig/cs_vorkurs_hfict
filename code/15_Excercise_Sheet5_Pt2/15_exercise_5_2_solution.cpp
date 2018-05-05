/********************************************************
 * Organization: 	hf-ict.ch
 * Developer:		p.suetterlin@hf-ict.info
 * Date:			2018-04-20
 *
 * This program represents the solution to Excercise 5
 * pt.2 - Calculate the time it takes an object to collide
 * with earth's surface if dropped from heigth h0
 *
 ********************************************************/
 
 #include<iostream>
 #include<cmath>
 using namespace std;
 
 int main ()
 {
	 // Declare Variables and Constants
	 const double G = 9.80665; // Earth's gravitational acceleration in m/s^2
	 double h0;
	 
	 cout << "Enter the heigth from which the object is dropped [m]: ";
	 cin >> h0;
	 
	 double T = sqrt(2 * h0 / G);
	 
	 cout << "The object will collide with earth's surface after: " << T << " [s]" << endl;
	 cout << "The object will collide with earth's surface after: " << T / 60 << " [min]" << endl;
	 
	 return 0;
 }