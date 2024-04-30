// g++ -std=c++11 0392.cpp -o output
#include <string>
#include <iostream>

class Solution {
public:
    bool isSubsequence(std::string s, std::string t) {
        int s_i = 0, t_i = 0;
        while (s_i < s.size() && t_i < t.size()) {
            if (s[s_i] == t[t_i])
                s_i++;
            t_i++;
        }
        return s_i == s.size();
    }
};

int main() {
    Solution solution;

    std::string s1 = "acg";
	std::string s2 = "azt";
    std::string t = "abcdefg";
    std::cout << solution.isSubsequence(s1, t) << std::endl;
    std::cout << solution.isSubsequence(s2, t) << std::endl;
}
