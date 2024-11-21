// g++ -std=c++11 0104.cpp -o output

#include <iostream>
using namespace std;
// // Definition for a binary tree node.

struct TreeNode {
     int val; // value of the node

     TreeNode *left; // pointer to the left child
     TreeNode *right; // pointer to the right child

//   3 CONSTRUCTORS:
     TreeNode() : val(0), left(nullptr), right(nullptr) {} // default constructor
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {} // constructor with value
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {} // constructor with value and children
 };

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        } else {
			// Print the value of the current node being visited
            cout << "Visiting node with value: " << root->val << endl;

			// Recursively calculates the maximum depth of the left subtree
			cout << "Entering left subtree of node with value: " << root->val << endl;
            int leftDepth = maxDepth(root->left);
            cout << "Exiting left subtree of node with value: " << root->val << ", leftDepth: " << leftDepth << endl;

            // Recursively calculates the maximum depth of the right subtree
            cout << "\nEntering right subtree of node with value: " << root->val << endl;          
			int rightDepth = maxDepth(root->right);
            cout << "Exiting right subtree of node with value: " << root->val << ", rightDepth: " << rightDepth << endl;


			// Print the depths of the left and right subtrees
            cout << "Depth of left subtree: " << leftDepth << ", Depth of right subtree: " << rightDepth << endl;

			// after obtaining depths of the left and right subtrees, 
			// the function compares these depths and returns max of the 2 depths, 
			// incremented by 1 to account for the current node.
            return max(leftDepth, rightDepth) + 1;
        }
    }
};

int main() {
    Solution sol;

    // Example usage
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

	// // Creating nodes
    // TreeNode* root = new TreeNode(3);
    // TreeNode* node9 = new TreeNode(9);
    // TreeNode* node20 = new TreeNode(20);
    // TreeNode* node15 = new TreeNode(15);
    // TreeNode* node7 = new TreeNode(7);

    // // Connecting nodes according to the input
    // root->left = node9;
    // root->right = node20;
    // node20->left = node15;
    // node20->right = node7;

    cout << "Maximum depth of the binary tree: " << sol.maxDepth(root) << endl;

    return 0;
}