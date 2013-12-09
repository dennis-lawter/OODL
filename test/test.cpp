#include <iostream>
#include "gtest/gtest.h"
using namespace std;

int test(int x)
{
	return x;
}

TEST(testing, a)
{
	ASSERT_TRUE(0 == 0);
}

TEST(testing, b)
{
	ASSERT_TRUE(1 == 1);
}

int main(int argc, char** argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
