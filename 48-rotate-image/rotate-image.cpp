class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> m(n, vector<int>(n));
        int a = 0;
        int b = 0;

        for(int i = 0; i<n; i++){
            for(int j = 0; j<n ; j++){
                b = n-1-i;
                a = j;
                m[a][b] = matrix[i][j];
            }
        }
        for(int i=0 ; i<n; i++){
            for(int j=0; j<n; j++){
                matrix[i][j] = m[i][j];
            }
        }

    }
};