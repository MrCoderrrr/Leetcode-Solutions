class Solution {
public:
    string largestGoodInteger(string num) {
        int n = num.length();
        vector<int> a;
        int max = -1;
        for (char c : num) {
            a.push_back(c - '0'); 
        }
        reverse(a.begin(), a.end());

        int b = a.size();
        if(n - b >= 3){
            max = 0;
        }
        if(b > 2){
            for(int i = 0; i<b-2 ; i++){
                if(a[i] == a[i+1] && a[i] == a[i+2]){
                    if(a[i] > max){
                        max = a[i];
                    }
                }
            }
        }
        string s(3, '0' + max);


        if(max == -1){
            return "";
        }
        else{
            return s;
        }
    }
};