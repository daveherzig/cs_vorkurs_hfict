/********************************************************
 * Organization: 	hf-ict.ch
 * Developer:		p.suetterlin@hf-ict.info
 * Date:			2018-03-19
 *
 * This program uses the logical operators "&" (AND) and 
 * "|" (OR) to apply a bitwise logical operation on two
 * integer operands.
 *
 ********************************************************/

#include<iostream>
using namespace std;

int main()
{
	// Declare Integer Variables
	int q,r,out;
	
	// Logical Bitwise AND of q=65 r=22
	q = 65;
	r = 22;
	out = q & r;
	cout << "Bitwise AND of (" << q << " & " << r << ") = " << out << endl;
	
	// Logical Bitwise OR of q=240 r=15
	q = 240;
	r = 15;
	out = q | r;
	cout << "Bitwise OR of (" << q << " | " << r << ") = " << out << endl;
	
	system("pause");
	
	return 0;
}
