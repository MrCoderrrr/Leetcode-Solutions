class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int x =m * n;
        vector<int> a(x);
        int v = 0;
        int h = 1;
        int g = 0;
        int i = 0;
        int j = 0;
        int d = 0;
        int y = 1;
        
        while(g != x){
            if(h==1 && j!=m-1){
                a[g] = matrix[i][j];
                j++;
                g++;
            }
            else if(h==1  && j==m-1){
                a[g] = matrix[i][j];
                i++;
                g++;
                h=0;
                v=1;  
                m--;
            }
            else if(v==1 && i!=n-1){
                a[g] = matrix[i][j];
                i++;
                g++;
            }
            else if(v==1 && i==n-1){
                a[g] = matrix[i][j];
                j--;
                h = -1;
                v=0;
                g++;
                n--;
            }
            else if(h==-1 && j!=d){
                a[g] = matrix[i][j];
                j--;
                g++;
            }
            else if(h==-1  && j==d){
                a[g] = matrix[i][j];
                i--;
                g++;
                h=0;
                v=-1;
                d++;
            }
            else if(v==-1 && i!=y){
                a[g] = matrix[i][j];
                i--;
                g++;
            }
            else if(v==-1 && i==y){
                a[g] = matrix[i][j];
                j++;
                h=1;
                v=0;
                g++;
                y++;
            }
            
        }
return a;}
};