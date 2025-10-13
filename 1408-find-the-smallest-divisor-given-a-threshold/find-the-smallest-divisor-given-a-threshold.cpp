class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int maxx = INT_MIN;
        for(int i = 0; i<n; i++){
            maxx = max(maxx,nums[i]);
        }
        int low = 1;
        int high = maxx;
        int mid = 0;
        int s = 0;
        while(low <= high){
            mid = low + (high-low)/2;// this is good trick to remove integer overflow if low and high become very large
            s = 0;
            for(int i = 0; i<n ;i++){

                s += (nums[i] + mid - 1) / mid;
                // this is a brilliant trick please recheck this
            }
            if(s > threshold){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
return low;}
};