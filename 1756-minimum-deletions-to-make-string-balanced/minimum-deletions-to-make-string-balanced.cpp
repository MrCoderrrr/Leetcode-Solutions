class Solution {
public:
    int minimumDeletions(string s) {
        int n = s.length();
        vector<int> ahash(2);

        if(n < 2){
            return 0;
        }

        for(int i = 0; i<n; i++){
            if(s[i] == 'a'){
                ahash[0]++;
            }
            else{
                ahash[1]++;
            }
        }
        int ans = INT_MAX;
        int ca = 0;
        int cb = 0;
        int da = 0;
        int db = 0;
        cout << s << endl;
        cout << ahash[0] << endl;
        cout << ahash[1] << endl;

        int i = 0;

        do {
            da = ahash[0] - ca;
            db = cb;
            ans = min(ans, da + db);

            if (s[i] == 'a') {
                ca++;
            } else {
                cb++;
            }

            i++;
        } while (i < n);
            da = ahash[0] - ca;
            db = cb;
            ans = min(ans, da + db);


    return ans;}
};