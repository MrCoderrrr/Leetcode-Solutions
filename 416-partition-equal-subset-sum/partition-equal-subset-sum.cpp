class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i = 0; i < n; i++) {
            sum += nums[i];
        }

        if(sum % 2 != 0) return false;

        int target = sum / 2;
        vector<vector<double>> dp(n, vector<double>(target + 1, 0));

        for(int i = 0; i < n; i++) {
            dp[i][0] = 1;
        }

        if(nums[0] <= target) {
            dp[0][nums[0]] = 1;
        }

        for(int i = 1; i < n; i++) {
            for(int j = 0; j <= target; j++) {
                double nottake = dp[i - 1][j];
                double take = 0;
                if(nums[i] <= j) {
                    take = dp[i - 1][j - nums[i]];
                }
                dp[i][j] = nottake + take;
            }
            if (dp[i][target] > 0) return true;
        }

        return dp[n - 1][target] > 0;
    }
};