class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int sum = 0;
        int minn = 0;
        for (int weight : weights) {
            sum += weight;
            minn = max(minn, weight);
        }
        int low = minn, high = sum;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int p = 0;
            int t = 1;

            for (int i = 0; i < n; i++) {
                if (p + weights[i] > mid) {
                    t++;
                    p = 0;
                }
                p += weights[i];
            }

            if (t <= days) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
