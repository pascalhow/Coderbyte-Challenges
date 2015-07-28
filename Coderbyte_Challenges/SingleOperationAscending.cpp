/**************************************************************************
Determine whether an array can be ascending through a single swap operation
**************************************************************************/

#include "stdafx.h"
#include "Coderbyte_Challenges.h"

bool isAscending(int Array[], int N)
{
	bool ascending = true;

	for (int i = 0; i < N - 1; i++)
	{
		if (Array[i] <= Array[i + 1])
		{
			ascending = true;
		}
		else
		{
			return ascending = false;
		}
	}

	return ascending;
}

string SingleSwap(int Array[], int N)
{
	if(isAscending(Array, N) == true)
	{
		return "true";
	}
	else
	{
		for (int i = 0; i < N; i++)
		{
			for(int j = i + 1; j < N; j++)
			{
				//	Swap element
				int temp = Array[i];
				Array[i] = Array[j];
				Array[j] = temp;

				if(isAscending(Array, N) == true)
				{
					printf("Swap these: %d and %d\n", (i + 1), (j + 1));
					
					cout << "\nSwapped array: " << endl;
					
					for(int k = 0; k < N; k++)
					{
						cout << Array[k] << endl;
					}

					return "true";
				}
				else
				{
					//	Reswap element
					int temp = Array[i];
					Array[i] = Array[j];
					Array[j] = temp;
				}
			}
		}
	}

	return "false";
}

