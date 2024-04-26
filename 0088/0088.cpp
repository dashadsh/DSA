// g++ -std=c++11 -o output 88.cpp

#include <iostream>
#include <vector>
class Solution {
public:
	void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
   		int i = m - 1;
   		int j = n - 1;
    	int k = m + n - 1;
    
    	while (i >= 0 && j >= 0) {
        	if (nums1[i] > nums2[j]) {
            	nums1[k--] = nums1[i--];
       		} else {
            	nums1[k--] = nums2[j--];
        	}
    	}
    
    	while (j >= 0) {
        	nums1[k--] = nums2[j--];
    	}
	}
};

int main() {

	Solution solution;

    std::vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    std::vector<int> nums2 = {2, 5, 6};
    int n = 3;
    
    solution.merge(nums1, m, nums2, n);
    
    std::cout << "Merged Array: ";
    for (int i = 0; i < m + n; ++i) {
        std::cout << nums1[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
