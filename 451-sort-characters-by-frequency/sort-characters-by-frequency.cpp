class Solution {
public:
    string frequencySort(string s) {
        vector<int> hash(128, 0);
        string ans;

        for (char c : s) {
            hash[(unsigned char)c] += 1000;
        }

        for (int i = 0; i < 128; i++) {
            hash[i] += i;
        }

        sort(hash.begin(), hash.end(), greater<int>());

        for (int val : hash) {
            int freq = val / 1000;
            int id = val % 1000;
            ans.append(freq, char(id));
        }

        return ans;
    }
};
