class Solution {
public:
    int atmost(vector<int>& nums, int k){
        int l = 0;
        int r = 0;
        int n = nums.size();
        int ans = 0;
        map<int,int> hash;
        while(r<n){
            hash[nums[r]] = r;
            if(hash.size() > k){
                int minn = INT_MAX;
                int keyy = 0;
                for(auto x : hash){
                    if(x.second < minn){
                        keyy = x.first;
                        minn = x.second;
                    }
                }
                l = minn + 1;
                hash.erase(keyy);
            }
        ans += r-l+1;
        r++;}
        return ans;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
       int ans = atmost(nums,k) - atmost(nums,k-1);
        return ans;    }
};