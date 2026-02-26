class Solution {
public:
    vector<vector<int>> ans;
    void bt(vector<int> numm, vector<int> cur){
        int n = numm.size();
        if(n == 0){
            ans.push_back(cur);
        }
        for(int i = 0 ;i<n; i++){
            cur.push_back(numm[i]);
            numm.erase(numm.begin()+i);
            bt(numm,cur);
            numm.insert(numm.begin()+i,cur[cur.size()-1]);
            cur.pop_back();
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> numm = nums;
        vector<int> cur;
        bt(numm,cur);        
    return ans;}
};