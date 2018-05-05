/********************************************************
 * Organization: 	hf-ict.ch
 * Developer:		p.suetterlin@hf-ict.info
 * Date:			2018-04-20
 *
 * This program represents the solution to Excercise 5
 * pt.3 - Calculate the measured speed of a car by
 * s (distance) and time (t)
 *
 ********************************************************/
 
#include <iostream>
using namespace std;

int main() {
  // Prompt for time and distance
  double distance, time;
  cout << "Distance [m]: ";
  cin >> distance;
  cout << "Time [s]: ";
  cin >> time;

  // Calculate Velocity
  double v = distance / time;
  double kmPace = 1000 / v / 60;

  // Print result to screen in [m/s] and [km/h]
  cout << "Velocity: " << v << " [m/s]" << endl;
  cout << "Velocity: " << (v * 3.6) << " [km/h]" << endl;
  cout << "Pace: " << kmPace << " [min/km]" << endl;

  return 0;
}
