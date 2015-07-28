/***********************************************************************
Using the C++ language, have the function CaesarCipher(str,num) take the 
str parameter and perform a Caesar Cipher shift on it using the num 
parameter as the shifting number. A Caesar Cipher works by shifting each 
letter in the string N places down in the alphabet (in this case N will 
be num). Punctuation, spaces, and capitalization should remain intact. 
For example if the string is "Caesar Cipher" and num is 2 the output 
should be "Ecguct Ekrjgt".
***********************************************************************/

#include "stdafx.h"
#include "Coderbyte_Challenges.h"

string CaesarCipher(string str, int num) 
{ 
	char alphabet[] = 
	{	'a', 'b', 'c', 'd', 'e', 'f', 
		'g', 'h', 'i', 'j', 'k', 'l', 
		'm', 'n', 'o', 'p', 'q', 'r', 
		's', 't', 'u', 'v', 'w', 'x', 
		'y', 'z'};

	int arraysize = sizeof(alphabet)/sizeof(*alphabet);

	for (int i = 0; i < str.length(); i++)
	{
		if(isalpha(str[i]))
		{
			for (int j = 0; j < arraysize; j++)
			{
				if (!isupper(str[i]))
				{
					if (str[i] == alphabet[j])
					{
						str[i] = ( j + num < arraysize ) ? alphabet[j + num] : alphabet[(j + num) - arraysize];
						break;
					}
				}
				else
				{
					if (tolower(str[i]) == alphabet[j])
					{
						str[i] = ( j + num < arraysize ) ? toupper(alphabet[j + num]) : toupper(alphabet[(j + num) - arraysize]);
						break;
					}
				}
			}
		}
	}

  // code goes here                                                                                                                                                                                                                     
  return str; 
            
}