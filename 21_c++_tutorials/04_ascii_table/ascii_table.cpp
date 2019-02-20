/*
File name: ascii_table.cpp
Date: 9 Dec 2016
Author: Andrew Roberts
*/

// cin, cout:
#include <iostream>

// standard namespaces:
using namespace std;

// main function:
int main()
{
	// declare temperature
	char character;

	// loop between 0 and 127
	for(int num = 0; num < 128; num++)
	{
		// set the number equal to the character:
		character = num;

		// output the number and character:
		cout << num << " : " << character << endl;
	}

	// return integer:
	return 0;
}
