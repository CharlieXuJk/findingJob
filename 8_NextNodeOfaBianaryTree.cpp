/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode *father;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL), father(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* inorderSuccessor(TreeNode* p) {
        if(p->right != nullptr){
            p=p->right;
            while(p->left!=nullptr) {p=p->left;}
            return p;
        }else if(p->father == nullptr){
            return nullptr;
        }else{
            while(p->father!= nullptr) {
                if(p != p->father->right){
                    return p->father;
                }
                p = p->father;
            }
            return nullptr;
        }
    }
};