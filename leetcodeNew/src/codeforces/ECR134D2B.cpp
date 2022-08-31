#include<iostream>
#include <cstdlib>

using namespace std;

int main(){
    int tc;
    cin >> tc;
    for(int t=0;t<tc;t++){
        int n,m,sx,sy,d;
        cin >> n >> m >> sx >> sy >> d;
        if(abs(n-sx) + abs(m-sy)<=d){
            cout << -1 << endl;
        }
        else{
            if(sx+d>=n && sy+d >=m){
                cout << -1 << endl;
            }
            else if((sx-d<=1 && sx+d>=n) || (sy-d<=1 && sy+d>=m)){
                cout << -1 << endl;
            }
            else{
                cout << (n-1)+(m-1) << endl;
            }
        }
    }
}