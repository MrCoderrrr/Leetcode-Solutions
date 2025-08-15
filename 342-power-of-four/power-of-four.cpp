class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1){
            return true;
        }
        if(n<=0){
            return false;
        }
        bool x = false;
        if(n%4 == 0){
        x = isPowerOfFour(n/4);
        }
        else{
            return false;
        }
return x;}
};