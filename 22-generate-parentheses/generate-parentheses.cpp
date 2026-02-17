class Solution {
public:
    vector<string> gen(string curr, int i, vector<string> &ans, int n, int l, int r){
        if(curr.size() == 2*n){
            ans.push_back(curr);
            return ans;
        }
        if(l<n){
            curr += "(";
            l++;
            gen(curr,i+1,ans,n,l,r);
            curr.erase(i,1);
            l--;
        }
        if(r<l){
            curr += ")";
            r++;
            gen(curr,i+1,ans,n,l,r);
        }
        return ans;
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        int i = 0;
        int l =0;
        int r = 0;
        string curr = "";
        gen(curr,i,ans,n,l,r);
    return ans;}
};