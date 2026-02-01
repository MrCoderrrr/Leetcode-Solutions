class Solution {
public:
    int maxDepth(string s) {
        int n = s.length();
        int counter = 0;
        int ans = INT_MIN;
        for(int i = 0; i<n; i++){
            if(s[i] == '('){
                counter++;
            }
            else if(s[i] == ')'){
                counter--;
            }
            ans = max(ans, counter);
        }   
    return ans;}
};