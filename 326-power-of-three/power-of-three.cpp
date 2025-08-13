class Solution {
public:
    bool isPowerOfThree(int n) {
        bool ret = false;
        if(n == 1){
            return true;
        }
        else if(n <=0){
            return false;
        }
        if(n%3 == 0){
        ret = isPowerOfThree(n/3);
        }
        else{
            return false;
        }
    return ret;}
};