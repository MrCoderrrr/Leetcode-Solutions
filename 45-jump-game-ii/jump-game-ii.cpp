class Solution {
public:
    int jump(vector<int>& nums) {
        int l = 0;
        int r = 0;
        int n = nums.size();
        int jumps = 0;
        int far =0;
        for(int i = 0; i<n; i++){
            far = max(far,i+nums[i]);
            if(i == r && i != n-1){
                cout << r;
                l = r+1;
                r = far;
                jumps++;
            }
        }
    return jumps;}
};