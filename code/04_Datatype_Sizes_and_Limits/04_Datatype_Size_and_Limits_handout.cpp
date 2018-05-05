/********************************************************
 * Organization: 	hf-ict.ch
 * Developer:		p.suetterlin@hf-ict.info
 * Date:			2018-04-06
 *
 * This program shows how to determine the size of a
 * primitive data type. Additionally it shows what happens
 * if an Integer / Float value overflows.
 *
 ********************************************************/

#include<iostream>
#include<iomanip>
#include<sstream>
#include<float.h>
#include<bitset>
using namespace std;

void convertInt2Bin(int value, int steps);

int main ()
{
	/*
	 * SIZE of int, float, double, long, char and bool
	 */
	cout << "The size of an short value in memory is: " << sizeof(short) << " Byte(s)" << endl; 
	cout << "The size of an int value in memory is: " << sizeof(int) << " Byte(s)" << endl;
	cout << "The size of an long value in memory is: " << sizeof(long) << " Byte(s)" << endl;
	cout << "The size of an float value in memory is: " << sizeof(float) << " Byte(s)" << endl;
	cout << "The size of an double value in memory is: " << sizeof(double) << " Byte(s)" << endl;
	cout << "The size of an char value in memory is: " << sizeof(char) << " Byte(s)" << endl;
	cout << "The size of an bool value in memory is: " << sizeof(bool) << " Byte(s)" << endl;
	cout << endl << setw(50) << setfill('*') << "" << endl << endl;
	
	
	/*
	 * Limits of a Integer data type
	 */ 
	cout << "Maximal assignable value of data type int: " << INT_MAX << endl;
	cout << "Minimal assignable value of data type int: " << INT_MIN << endl;
	cout << endl << setw(50) << setfill('*') << "" << endl << endl;
	
	
	/*
	 * Integer Values in Memory and Integer Overflow
	 */
	int value;
	// Count from 0 to 2
	value = 0x0;
	convertInt2Bin(value, 3);
	// Count from (MAX - 2) to (MAX + 3) 
	value = INT_MAX - 2;
	convertInt2Bin(value, 6);
	// Count from -3 to 2
	value = 0xfffffffd;
	convertInt2Bin(value, 6);
	
	return 0;
}

void convertInt2Bin(int value, int steps)
{
	cout << "***** PRESS RETURN TO INCREMENT THE INTEGER VALUE BY 1 *****" << endl;
	cout << "[___DEC___]  [___HEX___]  [________________BINARY________________]" << endl;
	for (int i = 0; i < steps; i++)
	{
		cout << dec << setw(11) << showpos << setfill(' ') << value;
		cout << "   ";
		cout << "0x" << hex << setw(8) << setfill('0') << value;
		cout << "   ";
		bitset<32> bits(value);
		for (size_t j = 0; j < bits.size(); j++)
		{
			if (j && j%4 == 0) cout << " ";
			cout << bits[bits.size() - j -1];
		}
		cin.get();
		value++;
	}
	cout << endl;
}