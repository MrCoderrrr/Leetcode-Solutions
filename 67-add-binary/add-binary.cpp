#include <string>
#include <cmath>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
int i = (int)a.length() - 1;
        int j = (int)b.length() - 1;
        int carry = 0;
        string result = "";

        while (i >= 0 || j >= 0 || carry != 0) {
            int numA = (i >= 0) ? (a[i] - '0') : 0;
            int numB = (j >= 0) ? (b[j] - '0') : 0;

            int sum = numA + numB + carry;

            if (sum == 2 || sum == 3) {
                sum += 8;
                carry = 1;
            }
            else {
                carry = (sum >= 2) ? 1 : 0;
            }

            result += (sum % 10) + '0';

            i--;
            j--;
        }

        reverse(result.begin(), result.end());
        return result;
    }
};
