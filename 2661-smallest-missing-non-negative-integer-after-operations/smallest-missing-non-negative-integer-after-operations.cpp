class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        vector<int> hash(value, 0);

        for (int i = 0; i < nums.size(); i++) {
            int rem = nums[i] % value;
            if (rem < 0) rem += value;
            hash[rem]++;
        }

        int c = INT_MAX;
        int a = 0;
        for (int i = 0; i < value; i++) {
            if (hash[i] < c) {
                c = hash[i];
                a = i;
            }
        }

return c * value + a;}
};
