class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        int r = 0;
        int l = 0;

        while(r<s.size() && l < g.size()){
            if(g[l] <= s[r]){
                r++;
                l++;
            }
            else{
                r++;
            }
        }
        return l;
    }
};