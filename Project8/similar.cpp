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
		int maxLen = std::max(str1Len, str2Len);
		int minLen = std::min(str1Len, str2Len);
		if (maxLen >= minLen * 2) {
			return MIN_LENGTH_SCORE;
		}

		return (MAX_LENGTH_SCORE - (std::abs(str1Len - str2Len) * MAX_LENGTH_SCORE / minLen));
	}

private:
	static const int MAX_LENGTH_SCORE = 60;
	static const int MIN_LENGTH_SCORE = 0;

};

class SimilarityChecker {
public:
};