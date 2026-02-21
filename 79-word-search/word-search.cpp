class Solution {
public:
    bool ans = false;
    void bt(int i, int j, string cur, vector<vector<char>> &board, string word, vector<vector<int>> &hash){
        if(ans) return;
        int n = board.size();
        int m = board[0].size();
        if(cur == word){
            ans = true;
            return;
        }
        if(cur.length() == word.size()){
            return;
        }
        if(cur != word.substr(0, cur.size())) return;

        if(j-1 >= 0 && hash[i][j-1] == 0){
            cur.push_back(board[i][j-1]);
            hash[i][j-1]++;
            bt(i,j-1,cur,board,word,hash);
            cur.pop_back();
            hash[i][j-1]--;
        }
        if(i-1 >= 0 && hash[i-1][j] == 0){
            cur.push_back(board[i-1][j]);
            hash[i-1][j]++;
            bt(i-1,j,cur,board,word,hash);
            cur.pop_back();
            hash[i-1][j]--;
        }
        if(j+1 < m && hash[i][j+1] == 0){
            cur.push_back(board[i][j+1]);
            hash[i][j+1]++;
            bt(i,j+1,cur,board,word,hash);
            cur.pop_back();
            hash[i][j+1]--;
        }
        if(i+1 < n && hash[i+1][j] == 0){
            cur.push_back(board[i+1][j]);
            hash[i+1][j]++;
            bt(i+1,j,cur,board,word,hash);
            cur.pop_back();
            hash[i+1][j]--;
        }
        return;
    
    }
    bool exist(vector<vector<char>>& board, string word) {
        string cur = "";
        char s = word[0];
        int i = 0;
        int j = 0;
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> hash(n, vector<int>(m, 0));
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m ; j++){
                if(s == board[i][j]){
                    cur.push_back(board[i][j]);
                    hash[i][j]++;
                    bt(i,j,cur,board,word,hash);
                    hash[i][j]--;
                }
                cur = "";
            }
        }

    return ans;}
};