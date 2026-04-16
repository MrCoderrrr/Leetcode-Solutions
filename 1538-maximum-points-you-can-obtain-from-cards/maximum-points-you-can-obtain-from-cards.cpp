class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum = 0;
        int n = cardPoints.size();
        for(int i = n-k; i<n; i++){
            sum += cardPoints[i];
        }
        int ans = sum;
        int l = n-k;
        int r = 0;
        while(r<k){
            sum += cardPoints[r];
            sum -= cardPoints[l];
            r++;
            l++;
            ans = max(ans,sum);
        }
    return ans;}
};