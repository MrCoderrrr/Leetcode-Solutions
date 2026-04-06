class Solution {
public:
    int ans = 0;
    void bt(vector<vector<int>>& dp, int x, int y, int rem, vector<vector<int>>& grid){
        int m = grid.size();
        int n = grid[0].size();
        bool b = false;
        if(rem != 0){
            if(x+1<m && y<n && dp[x+1][y] == 0){
                dp[x+1][y] = 1;
                bt(dp,x+1,y,rem-1,grid);
                dp[x+1][y] = 0;
                b = true;
            }
            if(x-1 >= 0 && dp[x-1][y] == 0){
                dp[x-1][y] = 1;
                bt(dp,x-1,y,rem-1,grid);
                dp[x-1][y] = 0;
                b = true;
            }
            if(y-1 >= 0 && dp[x][y-1] == 0){
                dp[x][y-1] = 1;
                bt(dp,x,y-1,rem-1,grid);
                dp[x][y-1] = 0;
                b = true;
            }
            if(y+1 < n && dp[x][y+1] == 0){
                dp[x][y+1] = 1;
                bt(dp,x,y+1,rem-1,grid);
                dp[x][y+1] = 0;
                b = true;
            }
            if(!b){
                return;
            }
        }
        else{
            if(x+1<m && dp[x+1][y] == 2 && rem == 0){
                ans++;
                return;
            }
            if(x-1 >= 0 && dp[x-1][y] == 2 && rem == 0){
                ans++;
                return;

            }
            if(y-1 >= 0 && dp[x][y-1] == 2 && rem == 0){
                ans++;
                return;
            }
            if(y+1 < n && dp[x][y+1] == 2 && rem == 0){
                ans++;
                return;
            }
            else{
                return;
            }
            
        }
    } 

    int uniquePathsIII(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int rem = 0;
        int x = 0;
        int y = 0;
        vector<vector<int>> dp(m,vector<int>(n,0));
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(grid[i][j] == 0){
                    rem++;
                }
                else if(grid[i][j] == 1){
                    x = i;
                    y = j;
                }
                else if(grid[i][j] == -1){
                    dp[i][j] = -1;
                }
                else if(grid[i][j] == 2){
                    dp[i][j] = 2;
                }
            }
        }
        dp[x][y] = 1;
        bt(dp,x,y,rem,grid);
        return ans;
    }
};