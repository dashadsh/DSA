#include <iostream>

// g++ -std=c++11 0112.cpp -o output
// Definition for a binary tree node.
struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
		int sum = 0;
		if (root == nullptr)
			return false;
		return helper(root, targetSum, sum);     
    }

	bool helper(TreeNode* root, int targetSum, int sum) {
		if (root == nullptr)
        	return false; // return false if root is null - got an error!
		sum += root->val;
		if (root->left == nullptr && root->right == nullptr) {
			if (sum == targetSum)
				return true;
			else
				return false;
		}
		return helper(root->left, targetSum, sum) || helper(root->right, targetSum, sum); // one of the subtrees should return true
	}
};

int main() {
	Solution sol;

	TreeNode *root = new TreeNode(5);
	root->left = new TreeNode(4);
	root->right = new TreeNode(8);
	root->left->left = new TreeNode(11);
	root->left->left->left = new TreeNode(7);
	root->left->left->right = new TreeNode(2);
	root->right->left = new TreeNode(13);
	root->right->right = new TreeNode(4);
	root->right->right->right = new TreeNode(1);

	std::cout << sol.hasPathSum(root, 22) << std::endl;

	return 0;
}