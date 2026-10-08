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
class BSTIterator {

    vector<int>arr;
    int index=0;
public:

void func(TreeNode *root)
{
    if(root==NULL)
    return;
    
    func(root->left);
    arr.push_back(root->val);
    func(root->right);

}


    BSTIterator(TreeNode* root) {
        func(root);

    }
    
    int next() {

        return arr[index++];
    }
    
    bool hasNext() {
       
       return index<arr.size();
    }
    
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */