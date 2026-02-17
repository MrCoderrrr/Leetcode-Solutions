class Solution {
public:
    int fibb(int n){
        int ans = 0;
        if(n == 0){
            return 0;
        }
        if(n == 1){
            return 1;
        }
        else{
            ans = fibb(n-1) + fibb(n-2);
        }
        return ans;
    }
    int fib(int n) {
        int ans = 0;
        ans = fibb(n);
    return ans;}
};