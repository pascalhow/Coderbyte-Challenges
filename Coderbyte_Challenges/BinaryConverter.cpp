/************************************************************************
Using the C++ language, have the function BinaryConverter(str) return the
decimal form of the binary value. For example: if 101 is passed return 5, 
or if 1000 is passed return 8. 
************************************************************************/

#include "stdafx.h"
#include "Coderbyte_Challenges.h"

string BinaryConverter(string str) 
{ 
	int result = 0;

	for (int i = str.length() - 1; i >= 0; i--)
	{
		if(str[i] == '1')
		{
			int inc = pow(2.0, static_cast<int>(str.length() - 1 - i));
			result += inc;
		}	
		else if((str[i] != '1') && (str[i] != '0'))
		{
			cout << "Not a binary number" << endl;
			break;
		}
	}
	
	return std::to_string(static_cast<long long>(result)); 
}

string dectoBinary(string str)
{
	string binary;
	int decNum = atoi(str.c_str());

	if (decNum == 0)
	{
		return to_string(static_cast<long long>(decNum));
	}

	while(decNum != 0)
	{		
		binary += to_string(static_cast<long long>(decNum % 2));
		decNum /= 2;
	}

	reverse(binary.begin(), binary.end());

	return binary; 
}


