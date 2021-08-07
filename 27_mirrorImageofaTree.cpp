/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode* p){
        if(p == nullptr){
            return;
        }else{
            TreeNode* temp = p->right;
            p->right = p->left;
            p->left = temp;
            dfs(p->left);
            dfs(p->right);
        }
    }
    void mirror(TreeNode* root) {
        dfs(root);
    }
};