#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int tc;
    cin >> tc;
    for(int t=0;t<tc;t++){
        int n,k;
        cin >> n >> k;
        if((k+1)%4==0 || (k+2)%4==0 || ((k+1)*2)%4==0 ){
            cout << "YES" << endl;
            for(int i=0;i<n/2;i=i+1){
                if((k+(2*i+2))%4!=0){
                    cout << 2*i+1 << " " << 2*i+2 << endl;
                }
                else{
                    cout << 2*i+2 << " " << 2*i+1 << endl;
                }
            }
        }
        else{
            cout << "NO" << endl;
        }
        
    }
}