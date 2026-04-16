class Solution {
public:
    string minWindow(string s, string t) {
        int r = 0;
        int l = 0;
        int n = s.length();
        int ans = INT_MAX;
        int ml = -1;
        int mr = -1;
        map<int,int> hash;
        map<int,int> bash;
        if(s.size() < t.size()){
            return "";
        }
        for(int i = 0; i<t.size(); i++){
            bash[t[i]]++;
        }
        while(r<n){
            hash[s[r]]++;
            bool less = false;
            for(auto x : bash){
                if(hash[x.first] < bash[x.first]){
                    less = true;
                    break;
                }
            }
            while(less == false){
                if(r-l+1 < ans){
                    ans = r-l+1;
                    ml = l;
                    mr = r;
                }
                hash[s[l]]--;
                l++;
                less = false;
                for(auto x : bash){
                    if(hash[x.first] < bash[x.first]){
                        less = true;
                        break;
                    }
                }
            }
            r++;
        }
        if(ans == INT_MAX){
            return "";
        }
    return s.substr(ml,mr-ml+1);}
};