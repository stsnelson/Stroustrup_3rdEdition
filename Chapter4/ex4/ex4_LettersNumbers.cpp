/**
* @file ex4_LettersNumber.cpp
* @brief Chapter 4 Exercise 4.
*
* @details Print out letter 'a'..'z' and digits '0'..'9' and their interger values.
* Do the same with other printable characters. Do the same again but printing out HEX 
*
* @author Steve Snelson 
*
* @date 03/09/2018
*/
#include<iostream>

int main()
{
	/// Headers for the output
	std::cout<< "character  "<< "Decimal \t" << "Hex "<< std::endl;
	
	///Print out characterts a-z
	for(char ch='a';ch<='z';ch++)
	{

		///print out to screen the decimal value of ch
		std::cout<< ch << "  \t \t "<< std::dec << int(ch) << " \t ";
		///print out to screen the hex value of ch on the same line and end the line
		std::cout<< std::hex << int(ch)<<std::endl;
		
	}
	
	std::cout<< std::endl << std::endl;

	///Print out digits 0-9
	for(char ch='0';ch<='9';ch++)
	{
		///print out to screen the decimal value of ch
		std::cout<< ch << "  \t \t "<< std::dec << int(ch) << " \t ";
		///print out to screen the hex value of ch on the same line and end the line
		std::cout<< std::hex << int(ch)<<std::endl;
	}

	///Print out other printable chracters
	std::cout << std::endl << std::endl;
	std::cout << "!" << "  \t \t "<< std::dec << int('!') << " \t " << std::hex << int('!') << std::endl;
	std::cout << "*" << "  \t \t "<< std::dec << int('*') << " \t " << std::hex << int('*') << std::endl;
	std::cout << "@" << "  \t \t "<< std::dec << int('@') << " \t " << std::hex << int('@') << std::endl;

	return(0);
}

