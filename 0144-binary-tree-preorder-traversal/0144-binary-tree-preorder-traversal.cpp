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
    vector<int> arr;
public:

void func(TreeNode *root)
{
    if(!root)
    return;
    arr.push_back(root->val);
    func(root->left);
    func(root->right);
}
    vector<int> preorderTraversal(TreeNode* root) {
        func(root);
        return arr;
    }
};