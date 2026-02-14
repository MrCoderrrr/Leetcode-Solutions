class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        int mm = triangle[n-1].size();
        int opt = triangle[0][0];
        vector<vector<int>> dp(n, vector<int> (mm,0));
        dp[0][0] = triangle[0][0];
        if(n == 1){
            return triangle[0][0];
        }
        int m = 0;
        for(int i = 1; i<n ;i++){
            m = triangle[i].size();
            for(int j = 0; j<m;j++){
                if(j == 0 || j == m-1){
                    if(j == 0){
                        dp[i][j] = dp[i-1][0] + triangle[i][j];
                        continue;
                    }
                    else{
                        dp[i][j] = dp[i-1][j-1] + triangle[i][j];
                        continue;
                    }
                }
                else{
                    dp[i][j] = min(dp[i-1][j],dp[i-1][j-1]) + triangle[i][j];
                }
            }
       } 
       int ans = INT_MAX;
       for(int i = 0; i<m; i++){
        ans = min(ans,dp[n-1][i]);
       }
    return ans;;}
};