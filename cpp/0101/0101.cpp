#include <iostream>

// g++ -std=c++11 0101.cpp -o output
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
    bool isSymmetric(TreeNode* root) {
		if (root == nullptr)
			return true;
		return isMirror(root->left, root->right);	
    }

	bool isMirror(TreeNode* leftNode, TreeNode* rightNode) {
        if (leftNode == nullptr && rightNode == nullptr)
            return true;
        if (leftNode == nullptr || rightNode == nullptr)
            return false;
        return (leftNode->val == rightNode->val) 
			&& isMirror(leftNode->left, rightNode->right)
			&& isMirror(leftNode->right, rightNode->left);
    }
};

int main() {
	Solution sol;

	TreeNode *root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(2);
	root->left->left = new TreeNode(3);
	root->right->right = new TreeNode(33);

	std::cout << sol.isSymmetric(root) << std::endl;

	return 0;
}