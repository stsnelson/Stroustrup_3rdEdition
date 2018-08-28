/**
* @file WhatToTest.cpp
* @brief This file contains a basic square root function to test
*
* @author Steve Snelson
*
* @date 23/08/2018 
*/

#include<math.h>

/**
* The SquareRoot function returning the square root of a positive number
* @author Steve Snelson
* @param a Number(double) to be square root'ed
* @date 24/08/2018
*/
double SquareRoot(const double a)
{
	///Define var b and intialise with sqrt of a
	double b = sqrt(a);
	///Check that b is a number
	if(b!=b)
	{
		//if b is not a number then return -1
		return -1.0;
	}else
	{
		//if b is a numvber then return the sqrt of a
		return sqrt(a);
	}

}

