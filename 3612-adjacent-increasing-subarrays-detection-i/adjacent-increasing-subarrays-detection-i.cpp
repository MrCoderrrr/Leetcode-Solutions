class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        bool result = false;
        int l = -1;
        int m = -1;
        if(k<=1){
            result = true;
            return result;
        }
        if(k>2*n){
            result = false;
            return result;
        }


        for (int i = 0; i <= n - 2 * k; i++) {
            int b = 0;

            for (int j = i; j < i + 2 * k - 1; j++) {
                if (nums[j] >= nums[j + 1]) {
                    l = i;
                    m = j;
                    b++;
                }
            }

            if ((b == 1 && (l+k-1) == m) || b==0) { 
                result = true;
                return result;
            }
        }

        return result;
    }
};
