/********************************************************
 * Organization: 	hf-ict.ch
 * Developer:		p.suetterlin@hf-ict.info
 * Date:			2018-05-04
 *
 * This program represents the solution to Excercise 6
 * pt.3 - Arithmetics calculator (+, -, *, %)
 * * This version has an infinit while loop allowing to perform
 *   several calculations in a row
 * * Additionally the if statements were replaced by
 *   a switch statement.
 *
 ********************************************************/
 
#include <iostream>
using namespace std;

int main() {

  // Declare Variables
  double z1, z2, result;
  bool invalidOp;
  char op;
  char answer;
    
  do
  {
	  // User enters the two numbers and the operator character
	  cout << "Zahl 1: ";
	  cin >> z1;
	  cout << "Zahl 2: ";
	  cin >> z2;
	  cout << "Operator: ";
	  cin >> op;
	  
	  invalidOp = false;
	  
	  switch (op)
	  {
		  case '+':
			result = z1 + z2;
			break;
		  case '-':
			result = z1 - z2;
			break;		  
		  case '*':
			result = z1 * z2;
			break;		  
		  case '/':
			result = z1 / z2;
			break;		  
		default:
			invalidOp = true;
	  }
	  
	  // Write result to screen if operator is not invalid
	  if (invalidOp) 
	  {
		cout << "The operator: '" << op << "' is not supported by the program !!";
	  }
	  else cout << "Resultat: " << result;
	  
	  cout << endl << endl;
	  cout << ">> Type [x] followed by the [Return Key] to quit..." << endl;
	  cout << ">> To continue type another character..." << endl;
	  cin >> answer;
	  cout << endl;
  } while (answer != 'x');
}
