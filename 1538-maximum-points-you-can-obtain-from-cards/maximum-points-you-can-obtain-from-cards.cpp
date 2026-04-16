class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum = 0;
        int n = cardPoints.size();
        for(int i = 0; i<k; i++){
            sum += cardPoints[i];
        }
        int ans = sum;
        int r = k-1;
        int l = 0;
        while(r>=0){
            l--;
            if(l < 0){
                sum += cardPoints[l+n];
            }
            else{
                sum += cardPoints[l];
            }
            if(r < 0){
                sum -= cardPoints[r+n];
            }
            else{
                sum -= cardPoints[r];
            }
            r--;
            ans = max(ans,sum);
        }
    return ans;}
};