class Solution {
public:
    string removeOuterParentheses(string s) {
        int countero = 0;
        int counterc = 0;
        int n = s.length();
        int now = 0;
        for(int i = 0; i<n; i++){
            if(s[i] == '('){
                countero++;
            }
            else{
                counterc++;
            }
            if(countero == counterc){
                s.erase(i,1);
                s.erase(now,1);
                i -= 2;
                now = i+1;
            }
        }
    return s;}
};