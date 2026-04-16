class Solution {
public:
    int atmost(vector<int> &nums, int k){
        if(k < 0){
            return 0;
        }
        int r = 0; 
        int l = 0;
        int ans = 0;
        int c = 0;
        int n = nums.size();
        while(r<n){
            if(nums[r]%2 != 0){
                c++;
            }
            while(c > k){
                if(nums[l] %2 != 0){
                    c--;
                }
                l++;
            }
            ans += l-r+1;
            r++;
        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        int ans = 0;
        ans = atmost(nums,k-1) - atmost(nums,k);
        return ans;
    }
};