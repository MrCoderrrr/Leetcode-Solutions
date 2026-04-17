class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        int maxx = INT_MIN;
        vector<bool> ans(n,true);
        for(int i  = 0; i<n; i++){
            maxx = max(maxx,candies[i]);
        }
        int needed = maxx - extraCandies;
        for(int i = 0; i<n; i++){
            if(needed <= candies[i]){
                ans[i] = true;
            }
            else{
                ans[i] = false;
            }
        }
    return ans;}
};