// g++ -std=c++17 0383.cpp -o 0383


#include <iostream>
#include <unordered_map>


class Solution {
public:
    bool canConstruct(std::string ransomNote, std::string magazine) {
		// hashmap for character counts in magazine
        std::unordered_map<char, int> charCounts;

		// Count occurrences of each character in magazine
        for (char c : magazine) {
            charCounts[c]++; // aba => [a]++, [b]++, again [a]++
        }

		// print hashmap
        std::cout << "HashMap created from magazine:" << std::endl;
        for (const auto& entry : charCounts) {
            std::cout << entry.first << ": " << entry.second << std::endl;
        }

		// iter through ransomNote
        for (char ch : ransomNote) {
            // if char not found in magazine or count becomes negative => False
				// charCounts.find(ch) == charCounts.end() evaluates to true 
				// if the character ch is not found in the hashmap.
            if (charCounts.find(ch) == charCounts.end() 
				// it means either the character is not present in the magazine or 
				// all occurrences of the character were used
				|| charCounts[ch] == 0) {
                return false;
            }
            // decrement count of char in magazine
            charCounts[ch]--;
        }

		// if all chars in ransomNote found and counts are non-negative => True
        return true;
    }
};

int main() {
    Solution solution;
    
    std::cout << std::boolalpha; // print boolean values as true/false
    std::cout << "\nTest Case 1: " << solution.canConstruct("a", "b") << std::endl;  // Output: false
    std::cout << "\nTest Case 2: " << solution.canConstruct("aa", "ab") << std::endl;  // Output: false
    std::cout << "\nTest Case 3: " << solution.canConstruct("aa", "aba") << std::endl;  // Output: true
    
    return 0;
}