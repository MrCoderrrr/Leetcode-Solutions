class Solution {
public:
    vector<vector<int>> ans;
    void bt(int i, vector<int> cur, vector<int> & nums){
        int n = nums.size();
        if(i == n){
            return;
        }
        bt(i+1, cur, nums);
        cur.push_back(nums[i]);
        ans.push_back(cur);
        bt(i+1, cur, nums);
        cur.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> cur;
        int i = 0;
        bt(i, cur, nums);
        ans.push_back(cur);
    return ans;}
};