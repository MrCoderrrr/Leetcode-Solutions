class Solution {
public:
    vector<vector<int>> ans;
    void bt(int i, vector<int> nums, vector<int> cur, int k, int n, int c){
        if(c == k && n == 0){
            ans.push_back(cur);
            return;
        }
        if(c == k){
            return;
        }
        if(i == 9){
            return;
        }
        cur.push_back(nums[i]);
        c++;
        bt(i+1,nums,cur,k,n-nums[i],c);
        c--;
        cur.pop_back();
        bt(i+1,nums,cur,k,n,c);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> nums;
        for(int i = 1; i<10; i++){
            nums.push_back(i);
        }
        int i = 0;
        vector<int> cur;
        int c = 0;
        bt(i,nums,cur,k,n,c);
    return ans;}
};