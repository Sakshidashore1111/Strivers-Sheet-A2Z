class Solution {
public:

    int height(TreeNode* root)
    {
        if(root == NULL)
            return 0;

        int left = height(root->left);
        int right = height(root->right);

        return 1 + max(left, right);
    }  

    int diameterOfBinaryTree(TreeNode* root)
    {
        if(root == NULL)
            return 0;

        int op1 = height(root->left);
        int op2 = height(root->right);
        int op3 = diameterOfBinaryTree(root->left);
        int op4 = diameterOfBinaryTree(root->right);

        return max({op1 + op2, op3, op4});
    }
};