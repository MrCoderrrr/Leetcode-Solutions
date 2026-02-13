class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, 0));
        dp[0][0] = 0;
        if(n == 1 || m == 1){
            return 1;
        }
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(i == 0){
                    dp[j][i] = 1;
                }
                else if(j == 0){
                    dp[j][i] = 1;
                }
                else{
                    dp[j][i] = dp[j-1][i] + dp[j][i-1];

                }
            }
        }
    return dp[m-1][n-1];}
};