class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long  sum = 0;
        int counter = 0;
        int n = matrix.size();
        int minn = INT_MAX;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                if(matrix[i][j] > 0){
                    sum += matrix[i][j];
                    minn = min(minn,matrix[i][j]);
                }
                else{
                    counter++;
                    sum -= matrix[i][j];
                    minn = min(-matrix[i][j], minn);
                }
            }
        }
        if(counter%2 == 0){
            return sum;
        }
        else{
            return sum- 2*minn;
        }
    }
};