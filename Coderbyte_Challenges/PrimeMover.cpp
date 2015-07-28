/**********************************************************************************************	
Using the C++ language, have the function PrimeMover(num) return the numth prime number. 
The range will be from 1 to 10^4. For example: if num is 16 the output should be 53 as 53 is 
the 16th prime number.
***********************************************************************************************/

#include "stdafx.h"
#include "Coderbyte_Challenges.h"

bool IsPrime(int num)
{
	if(num >= 2)
	{
		for (int i = 2; i < num; i++)
		{
			if ((num % i) == 0)
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

int PrimeMover(int num) 
{ 
	int count = 1;
	int firstPrime = 2;

	if ((num > 0) && (num <= 10^4)) 
	{
		while (count <= num)
		{
			if (IsPrime(firstPrime) == true)
			{	
				if (count == num)
				{
					return firstPrime;
				}			
				count++;
			}
			firstPrime++;
		}

		return firstPrime;
	}         
}
