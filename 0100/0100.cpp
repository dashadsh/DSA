// g++ -std=c++11 0100.cpp -o output

#include <iostream>
using namespace std;

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
    bool isSameTree(TreeNode* p, TreeNode* q) {
		// if both trees are empty, they are the same
		if (p == nullptr && q == nullptr)
			return true;
		else if (p == nullptr || q == nullptr)
			return false;
		// if the values of the nodes are not equal, the trees are not the same
		else if (p->val != q->val) {
			return false;
		}
		// recursively check the left and right subtrees
		return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
	}
};


int main() {
	Solution sol;

	// OG tree
	TreeNode* p = new TreeNode(1);
	p->left = new TreeNode(2);
	p->right = new TreeNode(3);

	TreeNode* q = new TreeNode(1);
	q->left = new TreeNode(2);
	q->right = new TreeNode(3);

	TreeNode* r = new TreeNode(1);
	r->left = new TreeNode(9);
	r->right = new TreeNode(3);

	TreeNode* s = new TreeNode(1);
	s->left = new TreeNode(3);
	s->right = new TreeNode(2);

	std::cout << sol.isSameTree(p, q) << std::endl;
	std::cout << sol.isSameTree(p, r) << std::endl;
	std::cout << sol.isSameTree(p, s) << std::endl;
	
	return 0;
	}