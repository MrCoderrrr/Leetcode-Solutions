class Solution {
public:
    string RLE(string s){
        int n = s.length();
            char curr = s[0];
            string a;
            int c = 1;
            for(int i = 1;i<n; i++){
                if(s[i] == curr){
                    c++;
                }
                else{
                    a += to_string(c) + curr;
                    curr = s[i];
                    c = 1;
                }
            }
            a += to_string(c);
            a += curr;  
        return a;
        }
    
    string countAndSay(int n) {
        string ans = to_string(1);
        for(int i = 1; i<n; i++){
            string x = RLE(ans);
            ans = x;
        }
    return ans;}
};