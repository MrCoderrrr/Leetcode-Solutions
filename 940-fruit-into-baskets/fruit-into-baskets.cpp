class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int r = 0;
        int l = 0;
        int ans = 0;
        map<int,int> hash;
        while(r<n){
            hash[fruits[r]] = r;
            if(hash.size()>2){
                int minn = INT_MAX;
                int keyy;
                for(auto x : hash){
                    if(x.second < minn){
                        minn = x.second;
                        keyy = x.first;
                    }
                }
                    l = minn + 1;
                    hash.erase(keyy);
            }
            ans = max(ans,r-l+1);
            r++;
        }
    return ans;}
};