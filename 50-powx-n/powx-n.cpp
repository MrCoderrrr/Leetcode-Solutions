class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;
        if(N < 0){
            N = -N;
            x = 1/x;
            return Power(x,N);
        }
        else{
            return Power(x,n);
        }
    };
    double Power(double x, long long n){
        double ans = 0;
        if(n == 1){
            return x;
        }
        if(n == 0){
            return 1;
        }
        if(n%2 == 0){
            ans = Power(x,n/2);
            return ans*ans;
        }
        else{
            n = n-1;
            ans = myPow(x,n/2);
            ans = ans*ans*x;
            return ans;           
        }
    return 0;}
};