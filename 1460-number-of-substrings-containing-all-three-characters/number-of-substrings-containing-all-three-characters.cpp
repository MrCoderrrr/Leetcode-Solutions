class Solution {
public:
    int till(string s, int k){
        int r = 0;
        int l = 0;
        int ans = 0;
        int n = s.length();
        map<int,int> hash;
        while(r<n){
            hash[s[r]]++;
            while(hash.size() > k){
                hash[s[l]]--;
                if(hash[s[l]] == 0){
                    hash.erase(s[l]);
                }
                l++;
            }
            r++;
            ans += l-r+1;
        }
        return ans;
    }
    int numberOfSubstrings(string s) {
        int ans = 0;
        ans = till(s,2) - till(s,3);
    return ans;}
};