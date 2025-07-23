#include <string>

class LengthChecker {
public:
	int getLengthScore(std::string str1, std::string str2) {
		if (str1.length() == str2.length()) {
			return 60;
		}
	}

};

class SimilarityChecker {
public:
};