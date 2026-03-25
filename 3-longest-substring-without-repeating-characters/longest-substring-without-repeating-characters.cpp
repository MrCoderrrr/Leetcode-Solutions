class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> hash(256);
        int n = s.length();
        if(n == 0){
            return 0;
        }
        if(n == 1){
            return 1;
        }
        int r = 1;
        int l = 0;
        hash[s[0]]++;
        int ans = 1;
        while(r != n){
            char x = s[r];
            if(hash[x] != 0){
                while(s[l] != x){
                    hash[s[l]]--;
                    l++;
                }
                l++;
            }
            else{
                hash[x]++;
            }
            ans = max(ans,r-l+1);
            r++;
        }
    return ans;}
};