class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        int n = potions.size();
        vector<int> ans;

        for (int i = 0; i< spells.size(); i++){
            int low = 0;
            int high = n-1;
            int first = n;

            while (low <= high) {
                int mid = (low + high) / 2;

                if (1LL * spells[i] * potions[mid] >= success){
                    first = mid;
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }

            ans.push_back(n - first);
        }

        return ans;
    }
};
