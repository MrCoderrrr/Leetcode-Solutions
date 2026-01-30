class Solution {
public:
    string reverseWords(string s) {
        
        while (!s.empty() && s[0] == ' ') {
            s = s.substr(1);
        }
        while (!s.empty() && s[s.length() - 1] == ' ') {
            s = s.substr(0, s.length() - 1);
        }

        int n = s.length();
        vector<string> a;
        string word = "";

        for (int i = 0; i < n; i++) {
            if (s[i] != ' ') {
                word += s[i];
            } else {
                if (!word.empty()) {
                    a.push_back(word);
                    word = "";
                }
            }
        }
        if (!word.empty()) {
            a.push_back(word);
        }

        string ans = "";
        for (int i = a.size() - 1; i >= 0; i--) {
            ans += a[i];
            if (i != 0) ans += " ";
        }

        return ans;
    }
};
