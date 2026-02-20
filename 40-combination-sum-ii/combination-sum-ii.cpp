class Solution {
public:
    vector<vector<int>> ans;
    void bt(int ind, vector<int> curr, int target, vector<int> candidates){
        int n = candidates.size();
            if(target == 0){
                ans.push_back(curr);
                return;
            }
        for(int j = ind; j<n; j++){
            if(candidates[j] > target) break;
            if(j>ind && candidates[j] == candidates[j-1]){
                continue;
            }
            curr.push_back(candidates[j]);
            bt(j+1,curr,target-candidates[j],candidates);
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        int ind = 0;
        vector<int> curr;
        bt(ind, curr, target, candidates);
    return ans;}
};