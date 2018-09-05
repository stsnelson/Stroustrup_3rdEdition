/**
* @file ex5_LargestSmallest.cpp
* @brief Chapter 4 Exercise 5.
*
* @details Largest and Smallest values for the following types - 
* char, short, int, long, float, double, long double and unsigned. 
*
* @author Steve Snelson 
*
* @date 05/09/2018
*/
#include<iostream>
#include<limits>

int main()
{
	///char
	std::cout<< "largest char\t\t== " << std::numeric_limits<char>::max();
	std::cout<< "\t\t\tsmallest char\t==\t\t " << std::numeric_limits<char>::min()<< std::endl;
	//short
	std::cout<< "largest short\t\t== " << std::numeric_limits<short>::max();
	std::cout<< "\t\t\tsmallest short\t==\t\t " << std::numeric_limits<short>::min()<< std::endl;
	///int
	std::cout<< "largest int\t\t== " << std::numeric_limits<int>::max();
	std::cout<< "\t\t\tsmallest int\t==\t\t " << std::numeric_limits<int>::min()<< std::endl;
	///long
	std::cout<< "largest long\t\t== " << std::numeric_limits<long>::max();
	std::cout<< "\t\t\tsmallest long\t==\t\t" << std::numeric_limits<long>::min()<< std::endl;
	///float
	std::cout<< "largest float\t\t== " << std::numeric_limits<float>::max();
	std::cout<< "\t\t\tsmallest float\t==\t\t " << std::numeric_limits<float>::min()<< std::endl;
	///double
	std::cout<< "largest double\t== " << std::numeric_limits<double>::max();
	std::cout<< "\t\t\tsmallest double\t==\t\t " << std::numeric_limits<double>::min()<< std::endl;
	///long double
	std::cout<< "largest long double\t== " << std::numeric_limits<long double>::max();
	std::cout<< "\t\t\tsmallest long double\t==\t\t " << std::numeric_limits<long double>::min()<< std::endl;
	//unsigned
	std::cout<< "largest unsigned\t== " << std::numeric_limits<unsigned int>::max();
	std::cout<< "\t\tsmallest unsigned\t== " << std::numeric_limits<unsigned int>::min()<< std::endl;
	

	return(0);
}

