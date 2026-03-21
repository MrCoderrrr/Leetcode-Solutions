class Solution {
public:
    bool isValid(string s) {
        stack<char> a;
        for(int i =0; i<s.length(); i++){
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