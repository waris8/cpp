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
        if((n+(m-1))%2==0){
            cout << "Burenka" << endl;
        }
        else{
            cout << "Tonya" << endl;
        }
        
    }
}