class Solution {
public:
vector<vector<int>> ans;
void bt(int i, vector<int> cur, int n, int k){
    int l = cur.size();
    if(l == k){
        ans.push_back(cur);
        return;
    }
    if(n-i< k-l-1){
        return;
    }
    cur.push_back(i);
    bt(i+1,cur,n,k);
    cur.pop_back();
    bt(i+1,cur,n,k);
}
    vector<vector<int>> combine(int n, int k) {
        int i = 1;
        vector<int> cur;
        bt(i,cur,n,k);
        return ans;
    }
};