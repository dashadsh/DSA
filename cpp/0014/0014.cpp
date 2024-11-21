
#include <vector>
#include <string>
#include <iostream>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        // if (strs.empty()) return "";
        
        for (int i = 0; i < strs[0].size(); ++i) {
			//std::cout << "\nchecking char of string 0 at idx " << i << "...\n";

            for (int j = 1; j < strs.size(); ++j) {
				//std::cout << "compare char at idx " << i << " of string 0 with string " << j << "...\n";

                if (i >= strs[j].size() || strs[j][i] != strs[0][i]) {
					//std::cout << "mismatch found at idx " << i << ". returning common prefix...\n";
                    return strs[0].substr(0, i);
                }
            }
        }
        
        // if all the same
        return strs[0];
    }
};

int main() {
	Solution solution;
	std::vector<std::string> strs = {"flower", "flow", "flight"};
	std::cout << solution.longestCommonPrefix(strs) << std::endl;
	return 0;
}