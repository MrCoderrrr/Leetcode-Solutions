class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int mid = 0;
        int ans = -1;
        int i = 0;
        vector<int> anss;
        while(high >= low){
            mid = (low + high)/2;
            if(nums[mid] > target){
                high = mid - 1;
            }
            else if(nums[mid] == target){
                ans = mid;
                high = mid - 1;    
            }
            else{
                low = mid + 1;
            }
        }
        anss.push_back(ans);
    
        low = 0;
        high = n-1;
        mid = 0;

        while(high >= low){
            mid = (low + high)/2;
            if(nums[mid] > target){
                high = mid - 1;
            }
            else if(nums[mid] == target){
                ans = mid;
                low = mid + 1;    
            }
            else{
                low = mid + 1;
            }
        }
        anss.push_back(ans);
return anss;}
};