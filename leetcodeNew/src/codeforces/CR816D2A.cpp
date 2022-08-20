#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int tc;
    cin >> tc;
    for(int t=0;t<tc;t++){
        int n,m;
        cin >> n >> m;
        if(n==1 && m==1){
            cout << 0 << endl;
        }
        else{
            cout << (2*(min(m,n)-1))+max(m,n) << endl;  
        } 
    }
}