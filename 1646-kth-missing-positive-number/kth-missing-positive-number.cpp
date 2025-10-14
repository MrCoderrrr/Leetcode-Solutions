class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int high;
        int low;
        int mid;
        int c = 1;
        int x = 0;
        bool f = false;
        while(x < k){
            low = 0;
            high = arr.size() - 1;
            f = false;
            while(low <= high){
                mid = (low + high)/2;
                if(arr[mid] == c){
                    f = true;
                    break;
                }
                else if(arr[mid]> c){
                    high = mid -1;
                }
                else{
                    low = mid + 1;
                }
            }
            if(!f){
                x++;
            }
            if(x == k){
                return c;
            }
            c++;
            f = false;
        }
return c;}
};