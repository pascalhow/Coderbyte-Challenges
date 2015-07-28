/**********************************************************************************************************************
Using the C++ language, have the function RunLength(str) take the str parameter being passed and return a 
compressed version of the string using the Run-length encoding algorithm. This algorithm works by taking the 
occurrence of each repeating character and outputting that number along with a single character of the repeating 
sequence. For example: "wwwggopp" would return 3w2g1o2p. The string will not contain any numbers, punctuation, or symbols.
***********************************************************************************************************************/

#include "stdafx.h"
#include "Coderbyte_Challenges.h"

string RunLength(string str) 
{ 
	int count = 0;
	int buffer_count = 0;
	char buffer[256];
	
	const char *p = str.c_str();	//	assign pointer p to first char of input string
	char temp_c = *p;

	while(*p != '\0')	//	while we have not reached end of string
	{
		if(temp_c == *p)
		{
			count++;	//	as long as our current char is same as the one we are looking at in the string, increment counter
		}
		else
		{
			buffer[buffer_count] = count + '0';		//	if chars differ, save the count
			buffer[buffer_count+1] = temp_c;		//	add the char to our buffer array
			buffer_count = buffer_count + 2;		//	move to next empty spot in our buffer array
			temp_c = *p;	//	update our current char
			count = 1;		//	reset counter
		}
		*p++;	//	move to next char in user input string
	}

	//	do this for last set of char in user input string
	buffer[buffer_count] = count + '0';
	buffer[buffer_count+1] = temp_c;
	buffer[buffer_count+2] = '\0';

	str = buffer;

	return str;           
}