class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int n = points.size();
        int a = 0;
        int b = 0;
        int aa = points[0][0];
        int bb = points[0][1];
        int sum = 0;
        for(int i = 1; i<n; i++){
            a = points[i][0];
            b = points[i][1];
            int x = abs(aa - a);
            int y = abs(bb - b);
            int minn = min(x,y);
            int diff = abs(x-y);
            aa = a;
            bb = b;
            sum += minn + diff;
        }
    return sum;}
};