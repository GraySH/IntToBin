//============================================================================
// Name        : StringToBinary.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <algorithm>
using namespace std;


string intToBin(int num)
{
	string bits;
	while(num != 0)
	{
		int mod = num % 2;
		num = num / 2;
		bits.insert(bits.size(), ::to_string(mod));
	}

	reverse(bits.begin(), bits.end());
	cout << bits << endl;
}


int main()
{
	intToBin(8);
	return 0;
}
