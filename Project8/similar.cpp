#include <string>
#include <cmath>
#include <iostream>

class LengthChecker {
public:
	int getLengthScore(std::string str1, std::string str2) {
		int maxLen = std::max(str1.length(), str2.length());
		int minLen = std::min(str1.length(), str2.length());
		if (maxLen == minLen) {
			return MAX_LENGTH_SCORE;
		}
		if (maxLen >= minLen * 2) {
			return MIN_LENGTH_SCORE;
		}
		return (MAX_LENGTH_SCORE - ((maxLen - minLen) * MAX_LENGTH_SCORE / minLen));
	}

private:
	static const int MAX_LENGTH_SCORE = 60;
	static const int MIN_LENGTH_SCORE = 0;

};

class SimilarityChecker {
public:
};