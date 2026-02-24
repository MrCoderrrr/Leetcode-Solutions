class Solution {
public:
    bool done = false;
    vector<vector<char>> ans;
    bool valid(vector<vector<char>> &board, char ff, int x, int y){
    int n = board.size();
    int cbx = x / 3;
    int cby = y / 3;
    int cx = 3 * cbx;
    int cy = 3 * cby;
    for(int i = 0; i < n; i++){
        if(board[x][i] == ff || board[i][y] == ff){
            return false;
        }
    }
    for(int i = cx; i < cx + 3; i++){
        for(int j = cy; j < cy + 3; j++){
            if(board[i][j] == ff){
                return false;
            }
        }
    }

    return true;
}

    void bt(vector<vector<char>>& board, int x, int y){
        if(done){
            return;
        }
        if(y == 9){
            y = 0;
            x++;
        }
        if(x==9){
            ans = board;
            done = true;
            return;
        }
        char ff = 0;
        if(board[x][y] == '.'){
            for(int i = 1; i<10; i++){
                ff = i + '0';
                if(valid(board,ff,x,y)){
                    board[x][y] = ff;
                    bt(board,x,y+1);
                    board[x][y] = '.';
                }
            }
        }
        else{
            bt(board,x,y+1);
            return;
        }
    }

    void solveSudoku(vector<vector<char>>& board) {
        int n = board.size();
        int x = 0;
        int y = 0;
        vector<int> cur(10,0);
        bt(board,x,y);
        board = ans;
    }
};