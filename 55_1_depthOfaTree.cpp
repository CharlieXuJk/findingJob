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
    int maxDepth=0;
    void dfs(TreeNode* p, int depth){
        if(p==nullptr){
            maxDepth = max(maxDepth, depth);
            return;
        }else{
            dfs(p->left, depth+1);
            dfs(p->right, depth+1);
        }
    }
    int treeDepth(TreeNode* root) {
        dfs(root, 0);
        return maxDepth;
    }
};