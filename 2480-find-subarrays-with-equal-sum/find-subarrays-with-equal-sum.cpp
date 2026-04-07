class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> sums;
        int sum = nums[0] + nums[1];
        sums[sum]++;
        for(int i = 2; i<n; i++){
            sum -= nums[i-2];
            sum += nums[i];
            if(sums[sum] != 0){
                return true;
            }
            sums[sum]++;
        }
    return false;}
};