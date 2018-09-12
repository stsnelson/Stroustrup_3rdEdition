/**
* @file ex1_DeclareInitialise.cpp
* @brief Chapter 5 Exercise 1.
*
* @details Write declaration for the following :
* A pointer to a char
* An Array of 10 integers
* A Reference to array of 10 integers
* A pointer to pointer to a char
* A constant integer
* A pointer to a constant integer
* A constant pointer to an integer
* initialise them all.
* NOTHING TO RUN 
*
* @author Steve Snelson 
*
* @date 12/09/2018
*/
#include<iostream>

int main()
{
	///Pointer to char
	char* pcCharacter; 
	
	///An array of integers 10 of them
	int aiNumbers[10];
	vector<int> vIntegers(10);

	///Reference to an array of 10 integers
	int& raiNumbers=aiNumbers;
	
	///Point to array or chars and pointer to a string
	char* pcString[10];
	string* psString;

	///Contstant Integer
	const int ciNumber=42;
	
	///Pointer to constant integer
	const int* pciNumber=&ciNumber;
	
	///Pointer to a pointer of char
	char* pcCharcater2=&pcCharacter;


	return(0);
}

