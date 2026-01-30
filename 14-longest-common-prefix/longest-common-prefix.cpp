class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();

        if (n == 0) return "";
        if (n == 1) return strs[0];

        string a = strs[0];

        for (int i = 1; i < n; i++) {
            string b = strs[i];

            int aa = a.length();
            int bb = b.length();
            int cc = min(aa, bb);

            int j = 0;
            for (; j < cc; j++) {
                if (a[j] != b[j]) {
                    break;  
                }
            }

            a = a.substr(0, j);

            if (a.empty()) return "";
        }

        return a;
    }
};
