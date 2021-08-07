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
    bool hasSamePart(TreeNode* r1, TreeNode* r2){
        if(r1 == nullptr && r2 == nullptr){
            return true;
        }else if(r1 == nullptr && r2 != nullptr){
            return false;
        }else if(r1 != nullptr && r2 == nullptr){
            return true;
        }else if(r1->val != r2->val){
            return false;
        }else if(r1->val == r2->val){
            return hasSamePart(r1->left, r2->left) && hasSamePart(r1->right, r2->right);
        }
    }
    
    bool dfs(TreeNode*r1, TreeNode* r2){
        if(r1 == nullptr){
            return false;
        }else if (hasSamePart(r1,r2)){
            return true;        
        }else{
            return dfs(r1->left, r2) || dfs(r1->right, r2);
        }

    }
    bool hasSubtree(TreeNode* pRoot1, TreeNode* pRoot2) {
        if(pRoot2 == nullptr) return false;
        return dfs(pRoot1, pRoot2);
    }
};