class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> trustsCount(n + 1, 0);
        vector<int> trustedByCount(n + 1, 0);

        for (const auto& relation : trust) {
            int a = relation[0];
            int b = relation[1];
            trustsCount[a]++;
            trustedByCount[b]++;
        }

        for (int i = 1; i <= n; i++) {
            if (trustsCount[i] == 0 && trustedByCount[i] == n - 1) {
                return i;
            }
        }

        return -1;
    }
};
