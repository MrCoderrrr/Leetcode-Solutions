class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

        int sum =0;
        int len=cardPoints.size();
        for(int i=len-k;i<len;i++)
            sum+=cardPoints[i];

        int l=len-k,r=0;
        int maxSum = sum;
        while(r < k)
        {
            sum-=cardPoints[l];
            sum+=cardPoints[r];
            r++;
            l++;
            maxSum=max(maxSum,sum);

        }

        return maxSum;

        }
        
    
};