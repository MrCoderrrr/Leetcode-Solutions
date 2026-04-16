class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0;
        int r = 0;
        int n = s.length();
        int ans = 0;
        map<int,int> hash;
        while(r<n){
            hash[s[r]]++;
            int maxx = INT_MIN;
            for(auto x: hash){
                maxx = max(maxx,x.second);
            }
            while(r-l+1 - maxx > k){
                hash[s[l]]--;
                if(hash[s[l]] == 0){
                    hash.erase(s[l]);
                }
                l++;
            }
            ans = max(ans,r-l+1);
            r++;
        }

    return ans;}
};