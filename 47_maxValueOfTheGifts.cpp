class Solution {
public:
    int getMaxValue(vector<vector<int>>& grid) {
        int N = grid[0].size();
        int M = grid.size();
        
        int dp[M+1][N+1];
        memset(dp, 0, sizeof(dp));
        for(auto m = 1; m <= M; m++){
            for(auto n = 1; n <= N; n++){
                dp[m][n] = max(dp[m-1][n], dp[m][n-1]) + grid[m-1][n-1];
            }
        }
        return dp[M][N];
        
    }
};