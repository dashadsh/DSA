
class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        int k = 0; // Counter for non-val elements

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k++] = nums[i]; // Place non-val data at the next position
            }
        }
        return k;
    }
}