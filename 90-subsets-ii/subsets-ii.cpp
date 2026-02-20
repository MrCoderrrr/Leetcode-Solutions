class Solution {
public: vector<vector<int>> ans; 
    void bt(int i, vector<int> cur, vector<int> &nums){
        int n = nums.size();
        if(i == n){
            return;
        }
        for(int j = i; j<n; j++){
            if(j>i && nums[j] == nums[j-1]){
                continue;
            }
            cur.push_back(nums[j]);
            ans.push_back(cur);
            bt(j+1,cur,nums);
            cur.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> cur;
        sort(nums.begin(),nums.end());
        int i = 0;
        bt(i,cur,nums);
        ans.push_back(cur);
    return ans;}
};