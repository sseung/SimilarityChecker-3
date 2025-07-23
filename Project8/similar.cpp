#include <string>
#include <cmath>
#include <iostream>

class LengthChecker {
public:
	int getLengthScore(std::string str1, std::string str2) {
		int str1Len = str1.length();
		int str2Len = str2.length();
		if (str1Len == str2Len) {
			return MAX_LENGTH_SCORE;
		}

		if ((str1Len >= str2Len * 2) || (str2Len >= str1Len * 2)) {
			return MIN_LENGTH_SCORE;
		}

		int gap = std::abs(str1Len - str2Len);
		int min = std::min(str1Len, str2Len);
		int result = (60 - (gap * 60 / min));

		return result;
	}

private:
	static const int MAX_LENGTH_SCORE = 60;
	static const int MIN_LENGTH_SCORE = 0;

};

class SimilarityChecker {
public:
};