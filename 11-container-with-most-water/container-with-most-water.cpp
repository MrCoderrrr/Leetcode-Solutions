class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int start = 0;
        int end = n-1;
        int vol = 0;
        int v = 0;
        while(start<end){
            v = min(height[start],height[end]) * (end-start);
            if(v > vol){
                vol = v;
            }
            if(height[start]>height[end]){
            end--;
            }
            else{
                start++;
            }
        }
return vol;}
};