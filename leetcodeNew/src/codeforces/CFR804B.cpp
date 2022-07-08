#include<iostream>
#include<vector>

using namespace std;

void dfs(int i, int j, vector<vector<int>>& visited, vector<vector<int>>& v){
    visited[i][j]=1;

    int n = visited.size();
    int m = visited[0].size();
    if(j+1<m && visited[i][j+1]==0 && v[i][j]){
        dfs(i,j+1,visited,v);
    }
    if(j-1>=0 && visited[i][j-1]==0){
        dfs(i,j-1,visited,v);
    }
    if(i+1<n && visited[i+1][j]==0){
        dfs(i+1,j,visited,v);
    }
    if(i-1>=0 && visited[i-1][j]==0){
        dfs(i-1,j,visited,v);
    }
}

int main(){
    int t;
    cin >> t;
    for(int k=0;k<t;k++){
        int n,m;
        cin >> n >> m;
        vector<int> row(m, 1);
        vector<vector<int>> v(n,row);
        vector<vector<int>> store(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int a = v[i][j];

            }
        }
    }
}