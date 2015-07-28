// Coderbyte_Challenges.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"

#include "Coderbyte_Challenges.h"

namespace PROBLEMS
{	
	enum
	{
		RUNLENGTH = 1,
		PRIMEMOVER = 2,
		PALINDROMETWO = 3,
		DIVISION = 4,
		SINGLEOPERATIONASCENDING = 5,
		STRINGSCRAMBLE = 6,
		ARITHGEOII = 7,
		ARRAYADDITION = 8,
		BINARYCONVERTER = 9,
		LETTERCOUNT = 10,
		CAESARCIPHER = 11,
		SIMPLEMODE = 12,
	};
};

int _tmain(int argc, _TCHAR* argv[])
{
	
	int challenge;

	cout << "List of coderbyte challenges\n" << endl;
	cout << "1. RunLength" << endl;
	cout << "2. PrimeMover" << endl;
	cout << "3. PalindromeTwo" << endl;
	cout << "4. Division" << endl;
	cout << "5. SingleOperationAscending" << endl;
	cout << "6. StringScramble" << endl;
	cout << "7. ArithGeoII" << endl;
	cout << "8. ArrayAddition" << endl;
	cout << "9. BinaryConverter" << endl;
	cout << "10. LetterCount" << endl;
	cout << "11. CaesarCipher" << endl;
	cout << "12. SimpleMode" << endl;

	cout << "\nGo ahead and select one: " << endl;
	cin >> challenge;
	
	switch (challenge)
	{
		case (PROBLEMS::RUNLENGTH) :
			{
				cout << "/*********************************************************************" << endl;
				cout << "Using the C++ language, have the function RunLength(str) take the str " << endl;
				cout << "parameter being passed and return a compressed version of the string" << endl;
				cout << "using the Run-length encoding algorithm. This algorithm works by taking the" << endl; 
				cout << "occurrence of each repeating character and outputting that number along" << endl;
				cout << "with a single character of the repeating sequence. For example: wwwggopp" << endl; 
				cout << "would return 3w2g1o2p. The string will not contain any numbers, punctuation," << endl;
				cout <<	"or symbols." << endl;
				cout << "***********************************************************************/" << endl;

				string s;
				cout << "Enter your string: \n" << endl;
				std::cin >> s;
				std::cout << "Encoded string is:"<< RunLength(s) << std::endl;	
			}
			break;

		case (PROBLEMS::PRIMEMOVER) :
			{
				cout << "/********************************************************************" << endl;	
				cout << "Using the C++ language, have the function PrimeMover(num) return the " << endl;
				cout << "numth prime number. The range will be from 1 to 10^4. For example: if" << endl;
				cout << "num is 16 the output should be 53 as 53 is the 16th prime number." << endl;
				cout << "**********************************************************************/" << endl;
				int input;

				printf ("Enter: \n");
				std::cin >> input;
				std::cout << "Result:"<< PrimeMover(input) << std::endl;
			}
			break;

		case (PROBLEMS::PALINDROMETWO) :
			{
				cout << "/*********************************************************************" << endl;
				cout << "Using the C++ language, have the function PalindromeTwo(str) take the " << endl;
				cout << "str parameter being passed and return the string true if the parameter" << endl;
				cout << "is a palindrome, (the string is the same forward as it is backward) " << endl;
				cout << "otherwise return the string false. The parameter entered may have " << endl;
				cout << "punctuation and symbols but they should not affect whether the string " << endl;
				cout << "is in fact a palindrome. For example: ""Anne, I vote more cars race " << endl;
				cout << "Rome-to-Vienna"" should return true." << endl; 
				cout << "**********************************************************************/" << endl;
				string input;
				printf ("Enter: \n");
				std::cin >> input;
				std::cout << "Result:"<< PalindromeTwo(input) << std::endl;
			}
			break;

		case (PROBLEMS::DIVISION) :
			{
				cout << "/*********************************************************************" << endl;
				cout << "Using the C++ language, have the function Division(num1,num2) take both" << endl;
				cout << "parameters being passed and return the Greatest Common Factor. That is," << endl;
				cout << "return the greatest number that evenly goes into both numbers with no " << endl;
				cout << "remainder. For example: 12 and 16 both are divisible by 1, 2, and 4 so" << endl;
				cout << "the output should be 4. The range for both parameters will be from 1 to 10^3." << endl; 
				cout << "**********************************************************************/" << endl;

				int num1, num2;
				cout << "Enter first number: ";
				cin >> num1;
				cout << "Enter second number: ";
				cin >> num2;
				cout << "Greatest Common Divisor: " << Division(abs(num1), abs(num2)) << endl;
			}
			break;

		case (PROBLEMS::SINGLEOPERATIONASCENDING) :
			{
				cout << "/*********************************************************************" << endl;
				cout << "Determine whether an array can be ascending through a single swap " << endl;
				cout << "operation" << endl;
				cout << "*********************************************************************/" << endl;
				int num1, num2, num3, num4, num5;
				int numArray[5];
				int numOfelements = 5;

				cout << "Enter first number: ";
				cin >> num1;
				cout << "Enter second number: ";
				cin >> num2;
				cout << "Enter third number: ";
				cin >> num3;
				cout << "Enter fourth number: ";
				cin >> num4;
				cout << "Enter fifth number: ";
				cin >> num5;

				numArray[0] = num1;
				numArray[1] = num2;
				numArray[2] = num3;
				numArray[3] = num4;
				numArray[4] = num5;

				cout << "\nArray is:"<< endl;

				for (int i = 0; i < numOfelements; i++)
				{
					cout << numArray[i] << endl;
				}
	
				cout << "\nArray can be ascending with single swap operation: " << SingleSwap(numArray, numOfelements) << endl;
			}
			break;

		case (PROBLEMS::STRINGSCRAMBLE) :
			{
				cout << "/********************************************************************" << endl;
				cout << "Using the C++ language, have the function StringScramble(str1,str2) " << endl;
				cout << "take both parameters being passed and return the string true if a " << endl;
				cout << "portion of str1 characters can be rearranged to match str2, otherwise " << endl;
				cout << "return the string false. For example: if str1 is ""rkqodlw"" and str2 " << endl;
				cout << "is ""world"" the output should return true. Punctuation and symbols will" << endl;
				cout << "not be entered with the parameters." << endl;
				cout << "*********************************************************************/" << endl;

				string word1, word2;

				cout << "Enter word1: ";
				//std::getline(std::cin, word1);
				cin >> word1;
				cout << "Enter word2: ";
				cin >> word2;
				//std::getline(std::cin, word2);
	
				cout << "Can word 1 be rearranged to form word 2?: " << StringScramble(word1, word2) << endl;
			}
			break;

		case (PROBLEMS::ARITHGEOII) :
			{
				cout << "/******************************************************************" << endl;
				cout << "Using the C++ language, have the function ArithGeoII(arr) take the " << endl;
				cout << "array of numbers stored in arr and return the string ""Arithmetic""" << endl;
				cout << "if the sequence follows an arithmetic pattern or return ""Geometric""" << endl; 
				cout << "if it follows a geometric pattern. If the sequence doesn't follow " << endl;
				cout << "either pattern return -1. An arithmetic sequence is one where the " << endl;
				cout << "difference between each of the numbers is consistent, where as in a" << endl;
				cout << "geometric sequence, each term after the first is multiplied by some " << endl;
				cout << "constant or common ratio. Arithmetic example: [2, 4, 6, 8] and Geometric" << endl; 
				cout << "example: [2, 6, 18, 54]. Negative numbers may be entered as parameters," << endl;
				cout << "0 will not be entered, and no array will contain all the same elements." << endl;
				cout << "********************************************************************/" << endl;

				int num1, num2, num3, num4;
				int numArray[4];
				int numOfelements = 4;

				cout << "Enter first number: ";
				cin >> num1;
				cout << "Enter second number: ";
				cin >> num2;
				cout << "Enter third number: ";
				cin >> num3;
				cout << "Enter fourth number: ";
				cin >> num4;

				numArray[0] = num1;
				numArray[1] = num2;
				numArray[2] = num3;
				numArray[3] = num4;

				cout << "\nArray is:"<< endl;

				for (int i = 0; i < numOfelements; i++)
				{
					cout << numArray[i] << endl;
				}
	
				cout << "\nSequence is: " << ArithGeoII(numArray) << endl;
			}
			break;

		case (PROBLEMS::ARRAYADDITION) :
			{
				cout << "/********************************************************************" << endl;
				cout << "Using the C++ language, have the function ArrayAddition(arr) take the" << endl;
				cout << "array of numbers stored in arr and return the string true if any " << endl;
				cout << "combination of numbers in the array can be added up to equal the " << endl;
				cout << "largest number in the array, otherwise return the string false. For " << endl;
				cout << "example: if arr contains [4, 6, 23, 10, 1, 3] the output should return" << endl;
				cout << "true because 4 + 6 + 10 + 3 = 23. The array will not be empty, will not" << endl;
				cout << "contain all the same elements, and may contain negative numbers." << endl;
				cout << "*********************************************************************/" << endl;


				cout << "This solution is not complete yet :(" << endl;

				int num1, num2, num3, num4, num5;
				int counter = 0;

				cout << "Enter first number: ";
				cin >> num1;
				cout << "Enter second number: ";
				cin >> num2;
				cout << "Enter third number: ";
				cin >> num3;
				cout << "Enter fourth number: ";
				cin >> num4;
				cout << "Enter fifth number: ";
				cin >> num5;

				int numArray[6] = { num1, num2, num3, num4, num5, '\0' };

				cout << "\nArray is:"<< endl;

				for (int i = 0; i < 6; i++)
				{
					cout << numArray[i] << endl;
				}
	
				cout << "\nArray Addition result: " << ArrayAddition(numArray) << endl;
			}
			break;

		case (PROBLEMS::BINARYCONVERTER) :
			{
				cout << "/**********************************************************************" << endl;
				cout << "Using the C++ language, have the function BinaryConverter(str) return" << endl; 
				cout << "the decimal form of the binary value. For example: if 101 is passed " << endl;
				cout << "return 5, or if 1000 is passed return 8." << endl; 
				cout << "**********************************************************************/" << endl;

				string binaryNum;
				string decNum;

				cout << "Enter decimal number: ";
				cin >> decNum;
				cout << "\nBinary number is: " << dectoBinary(decNum) << endl;

				cout << "Enter binary number: ";
				cin >> binaryNum;
				cout << "\nDecimal number is: " << BinaryConverter(binaryNum) << endl;
			}
			break;

		case (PROBLEMS::LETTERCOUNT) :
			{
				cout << "/***********************************************************************" << endl;
				cout << "Using the C++ language, have the function LetterCount(str) take the str " << endl;
				cout << "parameter and return the first word with the greatest number of repeated" << endl; 
				cout << "letters. For example: ""Today, is the greatest day ever!"" should return " << endl;
				cout << "greatest because it has 2 e's (and 2 t's) and it comes before ever which" << endl;
				cout << "also has 2 e's. If there are no words with repeating letters return -1." << endl;
				cout << "Words will be separated by spaces." << endl;
				cout << "************************************************************************/" << endl;

				string str;

				cout << "Enter sentence: ";
				cin.ignore();
				std::getline(std::cin, str);
	
				cout << "First word with greatest number of repeated letters: " << LetterCount(str) << endl;
			}
			break;

		case (PROBLEMS::CAESARCIPHER) :
			{
				cout << "/***********************************************************************" << endl;
				cout << "Using the C++ language, have the function CaesarCipher(str,num) take the" << endl; 
				cout << "str parameter and perform a Caesar Cipher shift on it using the num" << endl; 
				cout << "parameter as the shifting number. A Caesar Cipher works by shifting each " << endl;
				cout << "letter in the string N places down in the alphabet (in this case N will be" << endl;
				cout << "num). Punctuation, spaces, and capitalization should remain intact. " << endl;
				cout << "For example if the string is ""Caesar Cipher"" and num is 2 the output" << endl; 
				cout << "should be ""Ecguct Ekrjgt""." << endl;
				cout << "***********************************************************************/" << endl;

				string str;
				int shift;

				cout << "Enter string: ";
				cin.ignore();
				getline(std::cin, str);

				cout << "Shift by: ";
				cin >> shift;

				cout << "\nCaesar cipher is: " << CaesarCipher(str, shift) << endl;
			}
			break;

		case (PROBLEMS::SIMPLEMODE) :
			{
				cout << "\n" << endl;
				cout << "/*********************************************************************" << endl;
				cout << "Using the C++ language, have the function SimpleMode(arr) take the" << endl; 
				cout << "array of numbers stored in arr and return the number that appears most" << endl;  
				cout << "frequently (the mode). For example: if arr contains [10, 4, 5, 2, 4]" << endl;  
				cout << "the output should be 4. If there is more than one mode return the one" << endl;  
				cout << "that appeared in the array first (ie. [5, 10, 10, 6, 5] should return 5 " << endl; 
				cout << "because it appeared first). If there is no mode return -1. The array " << endl; 
				cout << "will not be empty. " << endl; 
				cout << "*********************************************************************/" << endl; 
				cout << "\n" << endl;

				int num1, num2, num3, num4, num5;
				int arraysize = 5;

				cout << "Enter first number: ";
				cin >> num1;
				cout << "Enter second number: ";
				cin >> num2;
				cout << "Enter third number: ";
				cin >> num3;
				cout << "Enter fourth number: ";
				cin >> num4;
				cout << "Enter fifth number: ";
				cin >> num5;

				int numArray[5] = { num1, num2, num3, num4, num5};

				cout << "\nArray is:"<< endl;

				for (int i = 0; i < arraysize; i++)
				{
					cout << numArray[i] << endl;
				}
	
				cout << "\nNumber that appears most frequently: " << SimpleMode(numArray, arraysize) << endl;
				break;
			}
	}

	system("pause");
	return 0;
}

