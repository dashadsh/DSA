#include <iostream>
#include <vector>

using namespace std;

class binarySearch {
	public:
		int search(vector<int> &nums, int target){
			int left = 0;
			int right = nums.size() - 1;
			int mid;

			while (left <= right) {
				//mid = left + (right - left) / 2; // To avoid integer overflow
				mid = (left + right) / 2;
				if (nums[mid] == target)
					return mid;
				else if (nums[mid] < target)
					left = mid + 1;
				else
					right = mid - 1;
			}
			return -1;
		}
};

int main() 
{
	binarySearch solution;
	vector<int> nums = {1, 2, 3, 5, 6, 12, 25, 44, 77, 888, 9999};
	int target1 = 5;
	int target2 = 888;
	cout << solution.search(nums, target1) << endl;
	cout << solution.search(nums, target2) << endl;
	return 0;
}