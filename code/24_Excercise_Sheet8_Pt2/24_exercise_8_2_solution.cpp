/********************************************************
 * Organization: 	hf-ict.ch
 * Developer:		p.suetterlin@hf-ict.info
 * Date:			2018-06-15
 *
 * This program represents the solution to Excercise 8
 * pt.2 - Roulette Simulation - the player always bets on
 * even numbers - a simultation will take place where  
 * the croupier spins the ball, which eventually falls in one
 * of the pockets on the wheel - each of the pockets is
 * numbered with 0 through 36. The player looses his/her bet 
 * always if 0 appears or when the bet is lost. 
 * If the player won the bet, then the bank will pay even money.
 *
 ********************************************************/
 
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() {

  // m = Money available for gambling
  // n = Amount of money that will be spent for each bet
  // counter = Game counter
  int m, n, counter=0;

  // Prompt user for Money and Bet
  cout << "Kapital: ";
  cin >> m;
  cout << "Einsatz: ";
  cin >> n;
  
  // Calculate upper limit (when money is doubled)
  int limit = m*2;
    
  // Seed random generator with time
  srand (time(NULL));
  
  // Spin the wheel as long the winning limit is not reached 
  // and the player is not broke (not able to afford the next bet) 
  while (m < limit && m >= n)
  {
	// Get random number between 0 and 36
	int randomNumber = rand() % 37;
	
	// Check on winner
	if (randomNumber !=0 && randomNumber%2 == 0)
	{
		m += n;
	}
	else
	{
		m -= n;
	}
	counter++;
  }
  cout << "Nach " << counter << " Spielen ist der Betrag " << m << endl;
  
  return 0;
}