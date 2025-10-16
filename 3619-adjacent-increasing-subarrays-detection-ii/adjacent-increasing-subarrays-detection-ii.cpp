class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int n = nums.size();
        int low = 1, high = n, ans = 1;

        vector<int> left(n, 1), right(n, 1);

        for (int i = 1; i < n; i++) {
            if (nums[i] > nums[i - 1])
                left[i] = left[i - 1] + 1;
        }
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1])
                right[i] = right[i + 1] + 1;
        }

        while (low <= high) {
            int mid = (low + high) / 2;
            bool is = false;

            for (int i = 0; i + 1 < n; i++) {
                if (left[i] >= mid && right[i + 1] >= mid) {
                    is = true;
                    break;
                }
            }

            if (is) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return ans;
    }
};
