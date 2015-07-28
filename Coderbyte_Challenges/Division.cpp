/****************************************************************************
Using the C++ language, have the function Division(num1,num2) take both parameters 
being passed and return the Greatest Common Factor. That is, return the greatest
number that evenly goes into both numbers with no remainder. For example: 12 and 16
both are divisible by 1, 2, and 4 so the output should be 4. The range for both 
parameters will be from 1 to 10^3. 
*****************************************************************************/

#include "stdafx.h"
#include "Coderbyte_Challenges.h"

int Division(int a, int b) 
{
	
    return b == 0 ? a : Division(b, a % b);
}

