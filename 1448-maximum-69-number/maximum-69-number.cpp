class Solution {
public:
    int maximum69Number (int num) {
        int max = -1;
        int c = 0;
        int n = num;
        while(n > 0){
            if(n%10 == 6){
                max = c;
            }
            n /= 10;
            c++;
        }
        if(c>0){
            num = num + 3*pow(10,max);
        }

return num;}
};