// COMPILE:
// g++ -std=c++11 0028.cpp -o output
#include <iostream>
#include <string>

class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        int m = haystack.length();
        int n = needle.length();

        if (n == 0) return 0;

        for (int i = 0; i <= m - n; i++) {
            int j;
            for (j = 0; j < n; j++) {
                if (haystack[i + j] != needle[j])
                    break;
            }
            if (j == n) return i;
        }

        return -1;
    }
};

int main() {
    Solution solution;

    std::string haystack1 = "sadhappysad";
    std::string needle1 = "sad";
    std::cout << solution.strStr(haystack1, needle1) << std::endl; // Output: 0

    std::string haystack2 = "helloworld";
    std::string needle2 = "word";
    std::cout << solution.strStr(haystack2, needle2) << std::endl; // Output: -1

    return 0;
}
