#include<iostream>
#include <cstdlib>

using namespace std;

int main(){
    int tc;
    cin >> tc;
    for(int t=0;t<tc;t++){
        int n.k,r,c;
        cin >> n >> k >> r >> c;
        vector<vector<char>> v(n, vector<char> (n,'.'));
        v[r-1][c-1]='X';
        if((r-(r/k)*(k-1))==1){
            v[0][c-1]='X';
        }
        else{
            v[]
        }
    }
}