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
    vector<vector<int>> printFromTopToBottom(TreeNode* root) {
        vector<vector<int>> ans;
        if (!root) return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> temp;
            vector<TreeNode*> buf;
            while(!q.empty()){
                temp.push_back(q.front()->val);
                if(q.front()->left)
                    buf.push_back(q.front()->left);
                if(q.front()->right)    
                    buf.push_back(q.front()->right);
                q.pop();
            }
            ans.push_back(temp);
            for(auto i : buf){
                q.push(i);
            }
        }
        return ans;
    }
};