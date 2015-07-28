/*********************************************************************
Using the C++ language, have the function SimpleMode(arr) take the 
array of numbers stored in arr and return the number that appears most 
frequently (the mode). For example: if arr contains [10, 4, 5, 2, 4] 
the output should be 4. If there is more than one mode return the one 
that appeared in the array first (ie. [5, 10, 10, 6, 5] should return 5 
because it appeared first). If there is no mode return -1. The array 
will not be empty. 
*********************************************************************/

#include "stdafx.h"
#include "Coderbyte_Challenges.h"

int SimpleMode(int arr[], int arraysize) 
{ 
	int Maxcount = 0;
	int occurence_count = 0;
	int MaxAppearance = -1;

	for (int i = 0; i < arraysize; i++)
	{
		for (int j = i + 1; j < arraysize; j++)
		{
			if (arr[i] == arr[j])
			{
				occurence_count++;

				if (occurence_count > Maxcount)
				{
					Maxcount = occurence_count;
					MaxAppearance = arr[i];
				}
			}
		}
		occurence_count = 0;
	}

	// code goes here   
	return MaxAppearance;       
}