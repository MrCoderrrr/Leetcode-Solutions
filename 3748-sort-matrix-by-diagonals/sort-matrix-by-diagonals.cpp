class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int x =0;
        int y =0;
        vector<int> dia;

        for (int i = n - 1; i >= 0; i--) {
            dia.clear();
            x = i; y = 0;
            while (x < n && y < n) {
                dia.push_back(grid[x][y]);
                x++; 
                y++;
            }
            sort(dia.begin(), dia.end(), greater<int>());
            x = i; y = 0;
            int b = 0;
            while (x < n && y < n) {
                grid[x][y] = dia[b];
                x++;
                y++;
                b++;
            }
        }

        for (int i = 1; i < n; i++) {
            dia.clear();
            x = 0; y = i;
            while (x < n && y < n) {
                dia.push_back(grid[x][y]);
                x++; 
                y++;
            }
            sort(dia.begin(), dia.end());
            x = 0; y = i;
            int b = 0;
            while (x < n && y < n) {
                grid[x][y] = dia[b];
                x++; 
                y++; 
                b++;
            }
        }
return grid;}
};
