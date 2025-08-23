class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        int mid = low + (low-mid)/2;
        int ind = -1;
        while(low<=high){
            if(target<nums[mid]){
                high = mid -1;
                mid = low + (low-mid)/2;
            }
            else if(target > nums[mid]){
                low = mid+1;
                mid = low + (low-mid)/2;
            }
            else{
                ind = mid;
                break;
            }
        }

return ind;}
};