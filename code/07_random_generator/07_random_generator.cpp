/********************************************************
 * Organization: 	hf-ict.ch
 * Developer:		p.suetterlin@hf-ict.info
 * Date:			2018-06-15
 *
 * Random Number Generation Demonstration
 *
 ********************************************************/

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() {
  
  // Print RAND_MAX to screen
  cout << "RAND_MAX = " << RAND_MAX << endl;
  
  // Seed random generator with time
  srand (time(NULL));
  
  for (int i=0; i<10; i++) {
    // Random number between 0 and RAND_MAX
    int a = rand();
    cout << a << endl;

	/* Random number between 0 and 1 (Integer)	
    float b = rand() % 2;
    cout << b << endl;	
	*/ 
	
	/* Random number between 0 and 1 (Float)
    float c = (float)rand() / RAND_MAX;
    cout << c << endl;
    */ 
	
    /* Random number between n and m
    const int N = 20; // lower limit
    const int M = 30; // upper limit
    int d = (float)rand() / RAND_MAX * (M-N) + N;
    cout << d << endl;
	*/
  }
}

