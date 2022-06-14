#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
       int m = mat.size();
        if(m == 0)
            return mat;
        
        int n = mat[0].size();
        
        if (n*m != r*c)
            return mat;
        
        vector<vector<int>> res(r, vector<int>(c));
        
        int k=0;
        
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
            {
                int row = k/c;
                int col = k%c;
                res[row][col] = mat[i][j];
                k++;
            }
    
        return res;
}

int main(){
    return 0;
}