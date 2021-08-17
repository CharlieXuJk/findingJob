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
    bool isSymmetry(TreeNode* left, TreeNode* right){
        if (left->val != right->val){
            return false;
        }else{
            if((!left->left && right->right) || (left->left && !right->right) || (left->right && !right->left) || (!left->right && right->left)){
                return false;
            }
            if(!left->left && !left->right && !right->left && !right->right){
                return true;
            }
        }
        if(!left->left && !right->right){
            return isSymmetry(left->right,right->left);
        }
        if(!left->right && !right->left){
            return isSymmetry(left->left,right->right);
        }
        return isSymmetry(left->left, right->right) && isSymmetry(left->right, right->left);
    }
    bool isSymmetric(TreeNode* root) {
        if (!root) return true;
        if(!root->left && !root->right) return true;
        return isSymmetry(root->left, root->right);
    }
};