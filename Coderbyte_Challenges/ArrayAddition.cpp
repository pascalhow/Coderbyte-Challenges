/************************************************************************
Using the C++ language, have the function ArrayAddition(arr) take the array 
of numbers stored in arr and return the string true if any combination of 
numbers in the array can be added up to equal the largest number in the array, 
otherwise return the string false. For example: if arr contains [4, 6, 23, 10, 1, 3] 
the output should return true because 4 + 6 + 10 + 3 = 23. The array will 
not be empty, will not contain all the same elements, and may contain negative 
numbers. 
************************************************************************/

#include "stdafx.h"
#include "Coderbyte_Challenges.h"

int findBiggestNumber(int arr[], int arraysize)
{
	int biggestNum = arr[0];

	for(int i = 1; i < arraysize; i++)
	{
		if(biggestNum < arr[i])
		{
			biggestNum = arr[i];
		}
	}

	return biggestNum;
}

int ArrayAddition(int arr[]) 
{ 
	int arraysize = 0;
	int sum = 0;

	while (arr[arraysize] != NULL)
	{
		arraysize++;
	}

	int biggestNum = findBiggestNumber(arr, arraysize);

	//	First test
	for(int i = 0; i < arraysize; i++)
	{
		if(arr[i] != biggestNum)
		{
			sum += arr[i];

			if(sum == biggestNum)
			{
				return 1;
			}
		}
	}
  
	//	Now the long winded tedious test
	for(int i = 0; i < arraysize; i++)
	{
		if(arr[i] != biggestNum)
		{
			int result = sum - arr[i];

			//if(
		}
	}
	return 1; 
            
}

