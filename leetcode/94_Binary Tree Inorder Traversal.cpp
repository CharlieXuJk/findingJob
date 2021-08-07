class Solution {
public:
    vector<int> ans;
    void dfs(TreeNode* p){
        if(p == nullptr) return;
        dfs(p->left);
        ans.push_back(p->val);
        dfs(p->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        dfs(root);
        return ans;
    }
};