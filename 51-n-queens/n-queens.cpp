class Solution {
public:
    vector<vector<string>> ans;

    bool isValidBoard(vector<string> &cb, int row, int col, int n) {
        for(int i = 0; i < row; i++){
            if(cb[i][col] == 'Q') return false;
        }

        for(int i = row-1, j = col-1; i >= 0 && j >= 0; i--, j--){
            if(cb[i][j] == 'Q') return false;
        }

        for(int i = row-1, j = col+1; i >= 0 && j < n; i--, j++){
            if(cb[i][j] == 'Q') return false;
        }

        return true;
    }

    void bt(vector<string> &cb, int no, int n){
        if(no == n){
            ans.push_back(cb);
            return;
        }

        for(int j = 0; j < n; j++){
            if(isValidBoard(cb, no, j, n)){
                cb[no][j] = 'Q';
                bt(cb, no + 1, n);
                cb[no][j] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {    
        vector<string> cb(n, string(n, '.'));
        int no = 0;
        bt(cb, no, n);
        return ans;
    }
};