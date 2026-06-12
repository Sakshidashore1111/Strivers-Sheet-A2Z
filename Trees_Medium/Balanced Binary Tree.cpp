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

    int height(TreeNode* root)
      {
         if(root==NULL)
        return 0;

         int l = height(root->left);
         int r =height(root->right);
        return 1+max(l,r);
      }

      bool isBalanced(TreeNode* root) {
        
        if(root==NULL)
        {
            return 1;
        } 

        int left= height(root->left);
        int right=height(root->right);
         int diff = 0;
       if(left>right)
       diff= left-right;
       else
      diff= right-left;
        if(diff <= 1)
        {
            return isBalanced(root->left) && isBalanced(root->right); // you forgot to return the recursive call
        }                         //whenever you call any recursive function,either store it or return
       return 0;
    }
};
