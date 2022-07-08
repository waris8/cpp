#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        if(n%2==0){
            cout << 0 << " " << n/2 << " " << n/2 << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
}