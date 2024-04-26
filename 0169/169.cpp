// https://en.wikipedia.org/wiki/Boyer–Moore_majority_vote_algorithm
// https://ru.wikipedia.org/wiki/Алгоритм_большинства_голосов_Бойера_—_Мура

// g++ -std=c++11  -o output 169.cpp
// 

#include <iostream>
#include <vector>

class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        int candidate;
        int counter = 0;
        int num;

        for (int num : nums) {
            std::cout << "Current num: " << num << std::endl;
            if (counter == 0) {
                candidate = num;
                std::cout << "New candidate: " << candidate << std::endl;
            }
            if (candidate == num) {
                ++counter;
                std::cout << "Increment counter: " << counter << std::endl << std::endl;
            } else {
                --counter;
                std::cout << "Decrement counter: " << counter << std::endl << std::endl;
            }
        }
        return candidate;
    }
};

int main() {
    std::vector<int> nums = {0, 3, 0};
    Solution solution;
    int majority = solution.majorityElement(nums);
    std::cout << "Majority element: " << majority << std::endl;
    return 0;
}
