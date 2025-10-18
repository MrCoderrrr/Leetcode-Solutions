class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int maxx = 0;
        int sum = 0;
        for(int i =0; i<n; i++){
            maxx = max(maxx,nums[i]);
            sum += nums[i];
        }

        int high = sum;
        int low = maxx;
        int mid;
        int kk = 0;
        int isum = 0;
        int c = 0;
        int msum = 0;
        while(low <= high){
            mid = low + (high - low)/2;
            kk = 0;
            c = 0;
            isum = 0;
            msum = 0;
            for(int i = 0; i<n; i++){
                isum += nums[i];
                if(isum > mid){
                    msum = max(msum,isum-nums[i]);
                    isum = nums[i];
                    kk++;
                }
                if(i == n-1){
                    msum = max(msum,isum);
                }
            }
            kk++;
            if(kk <= k){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
return low;}
};