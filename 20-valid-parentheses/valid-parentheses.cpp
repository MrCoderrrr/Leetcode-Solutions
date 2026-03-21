class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        stack<char> a;
        for(int i =0; i<n; i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                a.push(s[i]);
            }
            else{
                if(a.empty()){
                    return false;
                }
                if(s[i] == ')' && a.top() == '('){
                    a.pop();
                }
                else if(s[i] == '}' && a.top() == '{'){
                    a.pop();
                }
                else if(s[i] == ']' && a.top() == '['){
                    a.pop();
                }
                else{
                    a.push(s[i]);
                }
            }
        }
        if(a.empty()){
            return true;
        }
    return false;}
};