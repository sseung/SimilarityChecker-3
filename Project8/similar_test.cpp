#include "gmock/gmock.h"
#include "similar.cpp"

TEST(TS, TC60) {
	LengthChecker checker;
	int result = checker.getLengthScore("ASD", "DSA");
	EXPECT_EQ(60, result);
}

TEST(TS, TC0) {
	LengthChecker checker;
	int result = checker.getLengthScore("A", "BB");
	EXPECT_EQ(0, result);
}