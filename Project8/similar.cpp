#include <string>

class LengthChecker {
public:
	int getLengthScore(std::string str1, std::string str2) {
		int str1Len = str1.length();
		int str2Len = str2.length();
		if (str1Len == str2Len) {
			return MAX_LENGTH_SCORE;
		}
		if ((str1Len >= str2Len) || (str2Len >= str1Len)) {
			return MIN_LENGTH_SCORE;
		}
	}

private:
	static const int MAX_LENGTH_SCORE = 60;
	static const int MIN_LENGTH_SCORE = 0;

};

class SimilarityChecker {
public:
};