class Solution {
public:
    int N = 40;
    int Fibonacci(int n) {
        long dp[N];
        dp[0] = 0;
        dp[1] = 1;
        for(auto i=2; i<N;i++){
            dp[i] = dp[i-2] + dp[i-1];
        }
        return dp[n];
    }
};