class Solution {
public:
    int sum(int n, vector<int>& dp) {
        if (n == 1){
            return 1;
            }
        if (n == 2){
            return 2;
            }
        if (dp[n] != -1){
            return dp[n];
            }

        dp[n] = sum(n-1, dp) + sum(n-2, dp);
        return dp[n];
    }

    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        int fsum = 0;
        if(n==1){
            return 1;
            }
        else if(n == 2){
            return 2;
            } 
        else {
            fsum = sum(n, dp);
            return fsum;
            }
return 0;}
};
