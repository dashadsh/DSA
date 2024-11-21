
#include <iostream>
#include <unordered_map>
// g++ -std=c++11 -o output 0013.cpp
class Solution {
public:
    int romanToInt(std::string s) {	

		std::unordered_map<char, int> romanToIntMap = {
			{'I', 1},
			{'V', 5},
			{'X', 10},
			{'L', 50},
			{'C', 100},
			{'D', 500},
			{'M', 1000}
		};

		// if (s.size() == 1)
		// 	return romanToIntMap[s[0]];
		
		int prevValue = 0;
		int res = 0;

        for (int i = s.size() - 1; i >= 0; i--) {
			int currValue = romanToIntMap[s[i]];

			if (currValue < prevValue) {
				res -= currValue;
			} else {
				res += currValue;
			}
			prevValue = currValue;

		}

		// // faster but less readable:
		// for (int i = 0; i < s.size(); i++) {
		// 	if (romanToIntMap[s[i]] < romanToIntMap[s[i + 1]]) {
		// 		res -= romanToIntMap[s[i]];}
		// 	else {
		// 		res += romanToIntMap[s[i]];}
   		// }

		return res;
	}

};

int main() {
	Solution solution;
	std::string s = "I";
	std::cout << solution.romanToInt(s) << std::endl;
	return 0;
}