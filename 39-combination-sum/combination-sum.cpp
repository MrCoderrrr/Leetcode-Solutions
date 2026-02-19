class Solution {
public:
    vector<vector<int>> ans;
    void bt(vector<int> &cur, int i, int n, int t, int sum, vector<int> &candidates){
        if(sum>t) return;
        if(i == n){
            if(sum == t){
                ans.push_back(cur);
            }
            return;
        }

        cur.push_back(candidates[i]);
        sum += candidates[i];

        bt(cur,i,n,t,sum,candidates);

        cur.pop_back();
        sum -= candidates[i];
        bt(cur,i+1,n,t,sum,candidates);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> cur;
        int i = 0;
        int sum = 0;
        int n = candidates.size();
        bt(cur,i,n,target,sum,candidates);
        return ans;
    }
};