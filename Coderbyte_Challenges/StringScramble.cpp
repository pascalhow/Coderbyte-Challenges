/****************************************************************************
Using the C++ language, have the function StringScramble(str1,str2) take both 
parameters being passed and return the string true if a portion of str1 characters 
can be rearranged to match str2, otherwise return the string false. For example: 
if str1 is "rkqodlw" and str2 is "world" the output should return true. 
Punctuation and symbols will not be entered with the parameters.
*****************************************************************************/

#include "stdafx.h"
#include "Coderbyte_Challenges.h"

string StringScramble(string scrambled_string, string ref_string) 
{ 
    int word_cnt = 0;

	//	ref_string needs to be at least as long as scrambled_string
	if(scrambled_string.length() >= ref_string.length())
	{
		for(int i = 0; i < ref_string.length(); i++)
		{
			for(int j = 0; j < scrambled_string.length(); j++)
			{
				if(ref_string[i] == scrambled_string[j])
				{
					if(word_cnt == ref_string.length() - 1)
					{
						return "true";
					}
					else if(word_cnt < ref_string.length())
					{
						word_cnt++;
						break;
					}		
				}
				if((ref_string[i] != scrambled_string[j]) && (j == scrambled_string.length() - 1))
				{
					return "false";
				}
			}
		}
	}
	return "false";          
}

