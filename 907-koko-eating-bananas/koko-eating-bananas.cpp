#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int maxx = *max_element(piles.begin(), piles.end());
        
        int low = 1;
        int high = maxx;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (mid == 0) mid = 1;
            
            long long grp = 0;

            for (int i = 0; i < n; i++) {
                grp += ((long long)piles[i] + mid - 1) / mid;
                if (grp > h) break;
            }

            if (grp > h)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return low;
    }
};
