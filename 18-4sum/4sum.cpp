class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int n = nums.size();
        if(nums.size() < 4) return {};

        for(int i = 0; i < n - 3; i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;
            for(int j = i + 1; j < n - 2; j++){
                if(j > i + 1 && nums[j] == nums[j-1]) continue;
                int l = j + 1;
                int r = n - 1;
                while(l < r){
                    long long sum = (long long)nums[i] + nums[j] + nums[l] + nums[r];
                    if(sum == target){
                        ans.push_back({nums[i], nums[j], nums[l], nums[r]});
                        int temp_l = l + 1;
                        while(temp_l < r && nums[temp_l] == nums[l]) temp_l++;
                        l = temp_l;
                        int temp_r = r - 1;
                        while(l < temp_r && nums[temp_r] == nums[r]) temp_r--;
                        r = temp_r;
                    }
                    else if(sum > target) r--;
                    else l++;
                }
            }
        }
        return ans;
    }
};
