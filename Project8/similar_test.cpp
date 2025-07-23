#include "gmock/gmock.h"
#include "similar.cpp"


TEST(TS, TC60) {
	LengthChecker checker;
	int result = checker.getLengthScore("ASD", "DSA");
	EXPECT_EQ(60, result);
}