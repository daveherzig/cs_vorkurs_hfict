/********************************************************
 * Organization: 	hf-ict.ch
 * Developer:		p.suetterlin@hf-ict.info
 * Date:			2018-06-09
 *
 * This program represents the solution to Excercise 7
 * pt.3 - Find all numbers starting from 2 that are prime 
 *
 ********************************************************/
 
#include <iostream>
using namespace std;

int main() {

  // Define [n]umber
  long long int n = 2;
  // Define [d]ivisor
  long long int d;
  // Define isPrime boolean;
  bool isPrime;
  // 2 is the first prime simply print it on screen
  cout << n << endl;
  // Now test all odd numbers starting from 3 for being prime
  // All even numbers higher 2 are divisable through 1,2 and itself
  // and thus are never prime.
  for (n=3;true; n+=2)
  {
	isPrime	= true;
	// Loop and check all factors between 2 and n/2.
	/* Why we check only the divisors where n <= n/2 can be easily  
	 * understood when looking at the following example n=12:
     * All possible factors forming the product 12 are -> [1*12 | 2*6 | 3*4]
	 * Since 1 and 12 are allowed factors of a prime those do 
	 * not have to be checked. So the highest remaining factor 
	 * in the list above is 6 which is exactly n/2 !!
	 */
	for (d=2; d <= n/2; d++)
	{
		// if d is a factor of n then n is not a prime 
		if (n%d == 0)
		{
			// Declare n to not be a prime
			isPrime = false;
			// quit the inner loop
			break;
		} 
	}
	// Print the numbers that are evidentially prime
	if (isPrime) cout << n << endl;	
  }
  return 0;
}