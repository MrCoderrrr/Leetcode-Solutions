class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> a;
        vector<int> b;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m ; j++){
                if(matrix[i][j] == 0){
                    a.push_back(i);
                    b.push_back(j);
                }
            }
        }
        for(int i = 0; i<a.size(); i++){
            for(int  j =0; j<m; j++){
                matrix[a[i]][j] = 0;
            }
        }
        for(int i = 0; i<b.size(); i++){
            for(int j =0; j<n; j++){
                matrix[j][b[i]] = 0;
            }
        }

    }
};