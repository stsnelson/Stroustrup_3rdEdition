/**
* @file ex3_TypeDef.cpp
* @brief Chapter 5 Exercise 3.
*
* @details Use TYPEDEF to define the types of 
* unsigned char, 
* const unsigned char
* Point to interger, 
* pointer to pointer to char, 
* pointer to array of char,
* array of 7 pointers to int
* pointer to an array of 7 pointers to int
* Array of of 8 arrays of 7 pointer to int
* 
* NOTHING TO RUN 
*
* @author Steve Snelson 
*
* @date 30/10/2018
*/
#include<iostream>

/// usinged char
typedef unsigned char uchar;
/// cons unsigned char
typedef const unsigned char c_uchar;
/// Pointer to and int
typedef int* PointInt;
/// pointer to pointer of char
typedef char** ppc;
/// pointer to array of char
typedef char (*PointArrayChar)[];
/// array of 7 pointers to int
typedef int* PointArrayInt[7];
/// pointer to an array of 7 pointers to int
typedef int (*PointArraInt)[];
/// Array of 8 arrays of 7 pointers to int
typedef int* arrayPointerInt[8][7];


int main (int argc, char** argv)
{
	return 0;
}

