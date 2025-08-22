class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int mmax = -1;
        int nmax = -1;
        int mmin = m;
        int nmin = n;
        for(int i =0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == 1){
                    if(i>nmax){
                        nmax = i;
                    }
                    if(j>mmax){
                        mmax = j;
                    }
                    if(i<nmin){
                        nmin = i;
                    }
                    if(j<mmin){
                        mmin = j;
                    }
                }
            }
        }
        int area = (nmax-nmin+1) * (mmax-mmin+1);
        if(mmax==-1 && nmax==-1){
            area = 0;
        }
return area;}
};