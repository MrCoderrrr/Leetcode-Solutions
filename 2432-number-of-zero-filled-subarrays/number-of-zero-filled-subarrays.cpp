class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int n = nums.size();
        vector<int> a;
        long long z =0;
        long long sum = 0;
        for(int i = 0; i<n; i++){
            if(nums[i] == 0){
                z++;
                if(i==n-1){
                    sum += (z*(z+1)/2);
                }
            }
            else{
                if(z>1){
                sum = sum + (z*(z+1)/2);
                }
                else if(z==1){
                    sum++;
                }
                z=0;
            }
        }

return sum;}
};