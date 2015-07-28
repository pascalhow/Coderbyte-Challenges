/************************************************************************************
Using the C++ language, have the function PalindromeTwo(str) take the str parameter being 
passed and return the string true if the parameter is a palindrome, (the string is the same 
forward as it is backward) otherwise return the string false. The parameter entered may have 
punctuation and symbols but they should not affect whether the string is in fact a palindrome. 
For example: "Anne, I vote more cars race Rome-to-Vienna" should return true. 
*************************************************************************************/

#include "stdafx.h"
#include "Coderbyte_Challenges.h"

string PalindromeTwo(string str) 
{ 
	int input_cnt = 0;
	int buffer_cnt = 0;
	char buffer[256];

	string result = "false";

    while (input_cnt < str.length())
	{
		if(isalpha(str[input_cnt]))
		{
			buffer[buffer_cnt] = str[input_cnt];
			buffer_cnt++;
		}
		input_cnt++;
	}

	for (int i = 0; i < buffer_cnt / 2; i++)
    {
        if (buffer[i] != buffer[buffer_cnt - 1 - i]) 
		{
			return "false";
		}
		else
		{
			return "true";
		}
    }
  return result;           
}
