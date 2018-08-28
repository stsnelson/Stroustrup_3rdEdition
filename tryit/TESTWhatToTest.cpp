/**
* @file TESTWhatToTest.cpp
* @brief Test suite and case for WhatToTest_cpp.
*
* @author Steve Snelson 
*
* @date 23/08/2018
*/

#include "WhatToTest.cpp"
#include <gtest/gtest.h>

/**
* @test Test Case - check poitive numbers
* @author Steve Snelson
* @date 24/08/2018
*/
TEST(SquareRootTest, PositiveNumbers)
{
	///Check the square root of 36.0,324.0,645.16 and 0
	ASSERT_EQ(6, SquareRoot(36.0));
	ASSERT_EQ(18.0, SquareRoot(324.0));
	ASSERT_EQ(25.4, SquareRoot(645.16));
	ASSERT_EQ(0, SquareRoot(0.0));
}

/**
* @test Test Case - Check negative numbers
* @author Steve Snelson
* @date 24/08/2018
*/
TEST(SquareRootTest, NegativeNumbers)
{
	///Check the square root of negative numbers returns -1
	ASSERT_EQ(-1.0, SquareRoot(-15.0));
	ASSERT_EQ(-1.0, SquareRoot(-0.3));
}

/**
* Main to run the tests
* @author Steve Snelson
* @param argc This is an Int needed by GoogleTest
* @param argv This is a pointer of char needed by GoogleTest
* @date 23/08/2018
*/
int main(int argc, char **argv)
{
	testing::InitGoogleTest(&argc, argv);
	///Run all tests
	return RUN_ALL_TESTS();
}
