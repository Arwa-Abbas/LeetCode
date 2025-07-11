/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        int depth=0,depth2=0;
        if (root==nullptr)
        return 0;
        int leftdepth=maxDepth(root->left);
        int rightdepth=maxDepth(root->right);
        return max(leftdepth,rightdepth)+1;
    }
};

/* Time Complexity: O(n)   -> n is nodes of tree
Space Complexity: O(h)    -> height of the tree
*/
