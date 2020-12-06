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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        TreeNode* root = NULL;
        helper(t1, t2, root);
        return root;
    }
    
    void helper(TreeNode* t1, TreeNode* t2, TreeNode* &result){
        if(t1 && t2){
            result = new TreeNode(t1->val + t2->val);
            helper(t1->left, t2->left, result->left);
            helper(t1->right, t2->right, result->right);
        } else if(t1){
            result = new TreeNode(t1->val);
            helper(t1->left, t2, result->left);
            helper(t1->right, t2, result->right);
        } else if(t2){
            result = new TreeNode(t2->val);
            helper(t1, t2->left, result->left);
            helper(t1, t2->right, result->right);
        }

    }
};
