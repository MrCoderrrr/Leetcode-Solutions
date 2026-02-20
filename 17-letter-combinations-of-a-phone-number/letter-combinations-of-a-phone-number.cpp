class Solution {
public:
    vector<string> ans;
    void bt(vector<string> keypad, int i, string cur, string digits){
        int n = digits.length();
        if(i == n){
            ans.push_back(cur);
            return;
        }
        int num = digits[i] - '0';
        for(int j = 0; j<keypad[num].length(); j++){
            cur.push_back(keypad[num][j]);
            bt(keypad,i+1,cur,digits);
            cur.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> keypad;
        keypad.push_back("");
        keypad.push_back("");
        keypad.push_back("abc");
        keypad.push_back("def");
        keypad.push_back("ghi");
        keypad.push_back("jkl");
        keypad.push_back("mno");
        keypad.push_back("pqrs");
        keypad.push_back("tuv");
        keypad.push_back("wxyz");
        int i = 0;
        int j = 0;
        string cur;
        bt(keypad,i,cur,digits);
    return ans;}
};