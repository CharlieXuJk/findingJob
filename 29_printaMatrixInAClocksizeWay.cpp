class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
        int cnt = 0;
        vector<int> ans;
        if(matrix.size()==0) return ans;
        unsigned long long turn = 0;
        int position[4];
        position[0] = 0;
        position[1] = matrix[0].size()-1;
        position[2] = matrix.size()-1;
        position[3] = 0;
        int tot = matrix[0].size() * matrix.size();
        
        while(cnt < tot){
            if(turn % 4 == 0){
                for(auto i = position[3]; i <= position[1]; i++){
                    ans.push_back(matrix[position[0]][i]);
                    cnt++;
                }
                position[0]++;
            }else if(turn % 4 == 1){
                for(auto i = position[0]; i <= position[2]; i++){
                    ans.push_back(matrix[i][position[1]]);
                    cnt++;
                }
                position[1]--;
            }else if(turn % 4 == 2){
                for(auto i = position[1]; i >= position[3]; i--){
                    ans.push_back(matrix[position[2]][i]);
                    cnt++;
                }
                position[2]--;
            }else if(turn % 4 == 3){
                for(auto i = position[2]; i >= position[0]; i--){
                    ans.push_back(matrix[i][position[3]]);
                    cnt++;
                }
                position[3]++;
            }
            turn++;
        }
        return ans;
    }
};