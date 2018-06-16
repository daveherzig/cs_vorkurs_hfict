/********************************************************
 * Organization: 	hf-ict.ch
 * Developer:		p.suetterlin@hf-ict.info
 * Date:			2018-06-15
 *
 * This program represents the solution to Excercise 8
 * pt.1 - Draw a pyramid with n layers/elements 
 *
 ********************************************************/
 
#include <iostream>
using namespace std;

int main() {

  // Declare variables
  int layerQty;

  // Prompt for the quantity of layers
  cout << "Anzahl Reihen: ";
  cin >> layerQty;
  
  // Loop through layers
  for (int i = 1; i <= layerQty; i++)
  {
	// Draw elements (*)
	for (int j = 1; j <= i; j++)
	{
		cout << "*";
	}
	
	// Line Feed
	cout << endl;
  }
  
  return 0;
}