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
void convertFloat2Bin(float value);

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

	/*
	 * Float Values in Memory and Float Overflow
	 */	
	float fl;
	// Value 0.0
	fl = 0.0;
	convertFloat2Bin(fl);	
	// Value 1.0
	fl = 1.0;
	convertFloat2Bin(fl);
	// Value -1.0
	fl = -1.0;
	convertFloat2Bin(fl);	
	// Value 2.0
	fl = 2.0;
	convertFloat2Bin(fl);
	// Value 2.5
	fl = 2.5;
	convertFloat2Bin(fl);	
	// Value 100
	fl = 100.0;
	convertFloat2Bin(fl);
	// Value 1.0e34
	fl = 1.0e34f;
	convertFloat2Bin(fl);	
	// Value FLT_MIN
	fl = FLT_MIN;
	convertFloat2Bin(fl);	
	// Value FLT_MAX
	fl = FLT_MAX;
	convertFloat2Bin(fl);	
    // Float Overflow	
	fl = FLT_MAX + 1e34;
	convertFloat2Bin(fl);	
	//system("pause");
	
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

void convertFloat2Bin(float value)
{
	const unsigned char * pf = reinterpret_cast<const unsigned char*>(&value);

	stringstream hexStream;
	stringstream binStream;
	bitset<1> signBit;
	bitset<8> exponent;
	cout << "***** PRESS RETURN TO SHOW NEXT FLOAT NUMBER *****" << endl;
	cout << "[____DEC____]  [___HEX___]  [________________BINARY________________]" << endl;
	cout << scientific << setw(13) << setfill(' ') << setprecision(4) << value;
	cout << "   ";
	for (int i = sizeof(float) - 1; i >= 0; --i)
	{
		hexStream << hex << setw(2) << setfill('0') << int(pf[i]);
		bitset<8> bits(pf[i]);
		for (size_t j = 0; j < bits.size(); j++)
		{
			if (j && j%4 == 0) binStream << " ";
			binStream << bits[bits.size() - j -1];
		}
		binStream << " ";
		
		// Extract sign bit and 7 bits of Exponent
		if (i == 3) {
			// fetch sign bit by index
			signBit[0] = bits[7];
			// move exponent bits one position to left to drop sign bit
			exponent |= (bits << 1); 
		}
		// Extract missing bit of Exponent
		if (i == 2) 
		{
			// extract lowest exponent bit
			exponent[0] = bits[7]; 
		}
	}
	
	cout << "0x" << hexStream.rdbuf();
	cout << "   ";
	cout << binStream.rdbuf();
	cout << endl;
	cout << fixed << setprecision(30) << value;
	cout << endl;
	cout << "Sign Bit: " << hex << setw(1) << setfill('0') << signBit << endl;
	cout << "Exponent: " << setw(8) << setfill('0') << exponent;
	cout << dec << " (2^" << (short)(exponent.to_ulong()) - 127 << ")" << endl;
	cin.get();
}