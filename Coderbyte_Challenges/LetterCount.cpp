/**************************************************************************
Using the C++ language, have the function LetterCount(str) take the str 
parameter and return the first word with the greatest number of repeated 
letters.
For example: "Today, is the greatest day ever!" should return greatest because 
it has 2 e's (and 2 t's) and it comes before ever which also has 2 e's. If 
there are no words with repeating letters return -1. Words will be separated 
by spaces.
***************************************************************************/

#include "stdafx.h"
#include <sstream>
#include "Coderbyte_Challenges.h"

string LetterCount(string str)
{
	string word;
	int wordcount = 0;
	int lettercount = 0;
	int MaxletterCount = 0;
	string greatestWord;
	istringstream iss(str);

	while (iss >> word)
	{
		if (wordcount == 0)
		{
			//	Initialise our greatest word with the first word
			greatestWord = word;
		}

		for(int i = 0; i < word.length(); i++)
		{
			for(int j = i + 1; j < word.length(); j++)
			{
				if(word[i] == word[j])
				{
					lettercount++;
				}
			}

			if(lettercount > MaxletterCount)
			{
				MaxletterCount = lettercount;
				greatestWord = word;
			}
			lettercount = 0;
		}
		wordcount++;
	}

	return greatestWord;
}