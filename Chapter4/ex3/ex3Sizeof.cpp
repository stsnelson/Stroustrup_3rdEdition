/**
* @file ex3Sizeoff.cpp
* @brief ex3 Write a program that prints the sizes of the fundamental types, few pointers types and few enumerations.
*
* @author Steve Snelson 
*
* @date 29/08/2018
*/
///std input output strean inc screen
#include<iostream>
///required to sizeof()
#include<limits>


/**
* Main to run the progam
* @author Steve Snelson
* @param argc This is an Int needed by GoogleTest
* @param argv This is a pointer of char needed by GoogleTest
* @date 29/08/2018
*/
int main()
{
	///fundamental types
	std::cout<< "Size of" << std::endl << "Fundamental Types" << std::endl;
	std::cout<< "Bool\t\t" << sizeof(bool) << std::endl;  		///BOOL
	std::cout<< "Char\t\t" << sizeof(char) << std::endl;		///CHAR
	std::cout<< "Int\t\t" << sizeof(int) << std::endl;		///INT
	std::cout<< "Double\t\t" << sizeof(double) << std::endl;	///DOUBLE
	
	///Pointer Types
	std::cout<< std::endl << std::endl << "Pointer Types" << std::endl;
	std::cout<< "Pointer Int\t\t" << sizeof(int*) << std::endl;		///POINTER INT	
	std::cout<< "Pointer Char\t\t" << sizeof(char*) << std::endl;		///POINTER CHAR
	std::cout<< "Pointer Double\t\t" << sizeof(double*) << std::endl;	///POINTER DOUBLE
	
	///Reference Types
	std::cout<< std::endl << std::endl << "Reference Types" << std::endl;
	std::cout<< "Ref Int\t\t\t" << sizeof(int&) << std::endl;		///REFERENCE INT	
	std::cout<< "Ref Char\t\t" << sizeof(char&) << std::endl;	///REFERENCE CHAR
	std::cout<< "Ref Double\t\t" << sizeof(double&) << std::endl;	///REFERENCE DOUBLE

	///Others
	std::cout<< std::endl << std::endl << "other types" << std::endl;
	std::cout<< "SHORT\t\t\t" << sizeof(short) << std::endl;
	//std::cout<< "ENUM\t\t" << sizeof(enum) << std::endl;
	return(0);
}



///pointer types
//int*
//char*
//double*

///reference types
//int&
//char&
//double&

//enum keyword {Mon, Tue, Wed, Thur, Fri};
