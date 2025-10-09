class Solution {
public:
    long long minTime(vector<int>& skill, vector<int>& mana) {
        int n = skill.size();
        int m = mana.size();

        vector<long long> a(n, 0);
        vector<long long> prev_a(n, 0);
        vector<long long> t(n, 0);
        vector<long long> s(n, 0);

        for(int i = 0; i < m; i++) {
            prev_a = a;

            for(int j = 0; j < n; j++)
                t[j] = 1LL * skill[j] * mana[i];

            vector<long long> prefix_t(n, 0);
            prefix_t[0] = t[0];
            for(int j = 1; j < n; j++)
                prefix_t[j] = prefix_t[j-1] + t[j];

            s[0] = prev_a[0];
            for(int j = 1; j < n; j++)
                s[j] = prev_a[j] - prefix_t[j-1];

            long long maxx = *max_element(s.begin(), s.end());

            a[0] = maxx + t[0];
            for(int j = 1; j < n; j++)
                a[j] = a[j-1] + t[j];
        }

        return a[n-1];
    }
};
