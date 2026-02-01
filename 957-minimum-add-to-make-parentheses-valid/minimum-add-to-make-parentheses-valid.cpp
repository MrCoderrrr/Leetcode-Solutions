class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.length();
        int c = 0;
        int o = 0;
        int ans = 0;
        for(int i = 0; i<n; i++){
            if(s[i] == '('){
                o++;
            }
            else if(s[i] == ')'){
                c++;
            }
            if(c>o){
                ans += (c-o);
                c = 0;
                o = 0;
            }
            if(i == n-1){
                ans += (o-c);
            }

        }
    return ans;}
};