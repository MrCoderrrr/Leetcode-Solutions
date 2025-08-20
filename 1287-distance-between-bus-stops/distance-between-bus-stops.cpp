class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int n = distance.size();
        if (start > destination) {
            swap(start, destination);
        }
        int sum1 = 0;
        for (int i = start; i < destination; i++) {
            sum1 += distance[i];
        }
        int total = 0;
        for (int i = 0; i < n; i++) {
            total += distance[i];
        }
        int sum2 = total - sum1;
        if (sum1 >= sum2) {
            return sum2;
        } else {
            return sum1;
        }
    }
};
