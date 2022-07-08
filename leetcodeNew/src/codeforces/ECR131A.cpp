#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int a00,a01,a10,a11;
        cin >> a00 >> a01 >> a10 >> a11;
        int sum = a00+a10+a11+a01;
        if(sum==0){
            cout << 0 << endl;
        }
        else if(sum==1 || sum==2 || sum==3){
            cout << 1 << endl;
        }
        else{
            cout << 2 << endl;
        }
    }
}