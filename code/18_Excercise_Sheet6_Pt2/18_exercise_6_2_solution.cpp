/********************************************************
 * Organization: 	hf-ict.ch
 * Developer:		p.suetterlin@hf-ict.info
 * Date:			2018-05-04
 *
 * This program represents the solution to Excercise 6
 * pt.2 - Calculate discount based on bought amount of goods
 *
 ********************************************************/
 
#include <iostream>
using namespace std;

int main() {

  // Collect information from console
  int overallQtySold;
  double pricePerUnit;
  cout << "Enter the amount of goods bought: ";
  cin >> overallQtySold;
  cout << "Enter the price per unit: ";
  cin >> pricePerUnit;  

  // Define discount variable and initialize with 0%
  double discount = 0.0;
	
  // 8% discount if the sold quantity is higher or equal 100
  if (overallQtySold >= 100) 
  {
	  discount = 0.08;
  }
  // else 5% discount if the sold quantity is equal or higher 10
  else if (overallQtySold >= 10)
  {
	  discount = 0.05;
  }
  
  // Calculate sum without discount
  double sum = overallQtySold * pricePerUnit;
  
  cout << "Your discount: (" << discount * 100 << "%) " << sum * discount << endl;
  cout << "Total charge: " << sum * (1 - discount) << endl;  
  
  return 0;
}
