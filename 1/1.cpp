// COMPILE:
// g++ -std=c++11 1.cpp -o output

#include <iostream>
#include <vector>
#include <unordered_map>

class TwoSum {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> numToIndex;

        for (int i = 0; i < nums.size(); ++i) {
            numToIndex[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (numToIndex.find(complement) != numToIndex.end() && numToIndex[complement] != i) {
                return {i, numToIndex[complement]};
            }
        }
        
        return {}; // return empty array if no solution found
    }
};

int main() {
    TwoSum solution;

    std::vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    std::vector<int> result1 = solution.twoSum(nums1, target1);
    std::cout << "Example 1 Output: [" << result1[0] << ", " << result1[1] << "]" << std::endl;

    std::vector<int> nums2 = {3, 2, 4};
    int target2 = 6;
    std::vector<int> result2 = solution.twoSum(nums2, target2);
    std::cout << "Example 2 Output: [" << result2[0] << ", " << result2[1] << "]" << std::endl;

    std::vector<int> nums3 = {3, 3};
    int target3 = 6;
    std::vector<int> result3 = solution.twoSum(nums3, target3);
    std::cout << "Example 3 Output: [" << result3[0] << ", " << result3[1] << "]" << std::endl;

    return 0;
}
