class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n =  obstacleGrid[0].size();
        bool l = false;
        bool h = false;
        vector<vector<int>> dp(m, vector<int>(n, 0));
        dp[0][0] = 0;
        if(obstacleGrid[m-1][n-1] == 1){
            return 0;
        }
        if(n == 1 && m == 1){
            if(obstacleGrid[0][0] == 1){
                return 0;
            }
            return 1;
        }
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(obstacleGrid[i][j] == 1){
                    dp[i][j] = 0;
                    if(i == 0){
                        l = true;
                    }
                    if(j == 0){
                        h = true;
                    }
                }
                else{
                    if(i == 0){
                        if(l){
                            dp[i][j] = 0; 
                        }
                        else{
                            dp[i][j] = 1;
                        }
                    }
                    else if(j == 0){
                        if(h){
                            dp[i][j] = 0; 
                        }
                        else{
                            dp[i][j] = 1;
                        }
                    }
                    else{
                        dp[i][j] = dp[i-1][j] + dp[i][j-1];
                    }
                }
            }
        }
    return dp[m-1][n-1];}
};