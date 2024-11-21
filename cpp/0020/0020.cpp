// g++ -std=c++11 0020.cpp -o output


#include <string>
#include <stack>
#include <iostream>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> stack; // stack to store the opening brackets
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') { // if character is an opening bracket
                stack.push(c); // push it to the stack
                std::cout << "pushed: " << c << std::endl;
            } else {
                if (stack.empty())
					return false;
                
                char top = stack.top(); // get the top element of the stack
                stack.pop(); // pop the top element to check if it matches the closing bracket
                
                if ((c == ')' && top != '(') || (c == '}' && top != '{') || (c == ']' && top != '[')) {
                    return false;
                }
                std::cout << "popped: " << top << std::endl;
            }
        }
        return stack.empty(); // stack should be empty if all brackets matched!
    }
};

int main() {
    Solution solution;
    std::string s = "{({})()}";
    std::cout << "my string: " << s << std::endl;
    std::cout << solution.isValid(s) << std::endl;
    
    return 0;
}
