#include<iostream>
#include<limits.h>
#include<vector>
#include <bits/stdc++.h>


using namespace std;

int main(){
    string res="Yes";
    int h,w;
    cin >> h >> w;
    vector<vector<char>> v(h,vector<char>(w,'p'));
    vector<char> snuke = {'s','n','u','k','e'};
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin >> v[i][j];
        }
    }
    if(v[0][0]!='s' || find(snuke.begin(),snuke.end(),v[h-1][w-1])==snuke.end()){
        res = "No";
    }
    else {
        int r = h-1;
        int c = w-1;
        char t = v[r][c];
        // int prev_ind = find(snuke.begin(),snuke.end(),v[r][c]) - v.begin();
        auto it = find(snuke.begin(),snuke.end(),v[r][c]);
        int index = it - v.begin();

        while(true){
            if(r==0 && c==0){
                break;
            }
            char next = snuke[(index+1)%5];
            if(r>0 && r<h-1 && c>0 && c<w-1){
                if(v[r-1][c]==next){
                    r -= 1;
                    continue;
                }
                else if(v[r+1][c]==next){
                    r +=1;
                    continue;
                }
                else if(v[r][c-1]==next){
                    c-=1;
                    continue;
                }
                else if(v[r][c+1]==next){
                    c+=1;
                    continue;
                }
                else{
                    res = "No";
                    break;
                }
            }else{
                if((r==0 && c>0) || (r==h-1 && c>0)){
                    if(v[r][c-1]==next){
                        c-=1;
                        continue;
                    }
                    else if(v[r][c+1]==next){
                        c+=1;
                        continue;
                    }
                    else{
                        res = "No";
                        break;
                    }
                }
                else if((c==0 && r>0) || (c==w-1 && r>0)){
                    if(v[r-1][c]==next){
                        r -= 1;
                        continue;
                    }
                    else if(v[r+1][c]==next){
                        r +=1;
                        continue;
                    }
                    else{
                        res = "No";
                        break;
                    }
                }
            }
            index--;
        }
    }
    cout << res << endl;
}