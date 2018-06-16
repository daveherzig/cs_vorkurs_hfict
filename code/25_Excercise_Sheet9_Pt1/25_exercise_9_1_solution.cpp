/********************************************************
 * Organization: 	hf-ict.ch
 * Developer:		p.suetterlin@hf-ict.info
 * Date:			2018-06-15
 *
 * This program represents the solution to Excercise 9
 * pt.1 - Simulation of a galton board with n balls.
 *
 *         *      [Possible Paths the ball can take]
 *       *   *    [Top to Down]
 *     *   *   *
 *    [0] [1] [2] [Boxes numbered from 0 to n]
 ********************************************************/
 
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() {

	// Declare constants
	const int NUMBER_OF_ROWS = 10;
	const int NUMBER_OF_BOXES = NUMBER_OF_ROWS+1;
  
	// Declare variables
	int numberOfBalls;
  
	// Declare Integer Array
	int box[NUMBER_OF_BOXES];
	
	// Seed random generator with time
    srand (time(NULL));

	// Prompt for the quantity of layers
	cout << "Anzahl Baelle: ";
	cin >> numberOfBalls;

	// Initialize array with 0 values so that
	// the balls falling into each box can be counted.
	for (int i=0; i<NUMBER_OF_BOXES; i++) {
		box[i] = 0;
	}
  
	// Perform a run for each ball
	for (int i=0; i < numberOfBalls; i++)
	{
		// If the ball does never move to the right
		// then it will drop to the leftmost box [0]
		int currentBox = 0;	
	
		// Iterate through the rows
		for (int j=0; j < NUMBER_OF_ROWS; j++)
		{
	 
			// Generate Random Number -> 0=Left or 1=Right
			int direction = rand()%2;
		
			// Ball tends to drop to the box positioned
			// right relatively to the previous target box
			// when the random number is 1
			currentBox += direction;
		}
	
		// The box where the ball drops into has been determined.
		// Increase the ball counter of the box by one ball.
		box[currentBox]++;
	}
  
	// Print results to screen
	for (int i=0; i < NUMBER_OF_BOXES; i++) {
		cout << "Fach " << i << ": " << box[i] << " Kugeln" << endl;
	}
  
	return 0;
}