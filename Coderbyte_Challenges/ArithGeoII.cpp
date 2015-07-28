/***********************************************************************
Using the C++ language, have the function ArithGeoII(arr) take the array 
of numbers stored in arr and return the string "Arithmetic" if the sequence 
follows an arithmetic pattern or return "Geometric" if it follows a geometric 
pattern. If the sequence doesn't follow either pattern return -1. An arithmetic 
sequence is one where the difference between each of the numbers is consistent, 
where as in a geometric sequence, each term after the first is multiplied by 
some constant or common ratio. Arithmetic example: [2, 4, 6, 8] and Geometric 
example: [2, 6, 18, 54]. Negative numbers may be entered as parameters, 0 will 
not be entered, and no array will contain all the same elements.
************************************************************************/

#include "stdafx.h"
#include "Coderbyte_Challenges.h"

bool isArithmetic(int arr[])
{
	int increment1;
	int increment2;

	increment1 = arr[1] - arr[0];
	increment2 = arr[2] - arr[1];


	return (increment1 == increment2);
}

bool isGeometric(int arr[])
{
	int multiplier1;
	int multiplier2;

	multiplier1 = arr[1] / arr[0];
	multiplier2 = arr[2] / arr[1];


	return (multiplier1 == multiplier2);
}

string ArithGeoII(int arr[]) 
{ 
	if (isArithmetic(arr) == true)
	{
		return "Arithmetic";
	}
	else if (isGeometric(arr) == true)
	{
		return "Geometric";
	}

  // code goes here   
  return "-1"; 
            
}

