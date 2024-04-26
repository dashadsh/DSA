
#include <iostream>

class Solution {
public:
    int lengthOfLastWord(std::string s) {
        int i = s.size() - 1;
        int res = 0;
        while (i >= 0 && !isalpha(s[i]))
            i--;
        while (i >= 0 && isalpha(s[i]))
            {
                i--;
                res++;
            }
        return res;    
    }
};