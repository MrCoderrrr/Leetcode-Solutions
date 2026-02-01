class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        if(n == 1){
            return s;
        }
        int low = 0;
        int high = 0;
        int c = 0;
        char curr;
        int fl = 0;
        string fans;
        for(int i = 0; i<n; i++){
            string ans;
            c = 0;
            curr = s[i];
            low = high = i;
            while(low >= 0 && s[low] == curr){
                if(low != i){
                    ans += curr; 
                }
                low--;
            }
            while(high < n && s[high] == curr){
                high++;
                ans+= curr;
            }
            while(low >= 0 && high < n && s[low] == s[high]){
                ans = s[low] + ans + s[high];
                high++;
                low--;
            }
            if(fl < ans.length()){
                fans = ans;
                fl = ans.length();
            }

        }
    return fans;}
};