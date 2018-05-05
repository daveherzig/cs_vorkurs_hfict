/********************************************************
 * Organization: 	hf-ict.ch
 * Developer:		p.suetterlin@hf-ict.info
 * Date:			2018-05-04
 *
 * This program represents the solution to Excercise 6
 * pt.3 - Arithmetics calculator (+, -, *, %)
 *
 ********************************************************/
 
#include <iostream>
using namespace std;

int main() {

  // Declare Variables
  double z1, z2, result;
  char op;
  
  // User enters the two numbers and the operator character
  cout << "Zahl 1: ";
  cin >> z1;
  cout << "Zahl 2: ";
  cin >> z2;
  cout << "Operator: ";
  cin >> op;
  
  // '+' was entered as operator --> Perform Addition
  if (op == '+') result = z1 + z2;
  
  // '-' was entered as operator --> Perform Subtraction
  if (op == '-') result = z1 - z2;
  
  // '*' was entered as operator --> Perform Multiplication
  if (op == '*') result = z1 * z2;
  
  // '/' was entered as operator --> Perform Division
  if (op == '/') result = z1 / z2;
  
  // Write result to screen
  cout << "Resultat: " << result;
  
  return 0;
}
