#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        int d = 2;
        cout << 2 << endl;
        vector<int> v(n+1,0);
        for(int j=1;j<=n/2;j++){
            if(v[j]==0){
                int temp = j;
                while(temp<=n){
                    if(v[temp]==0){
                        cout << temp << " ";
                        v[temp]=1;
                        temp *= 2;
                    }
                }
            }
        }
        for(int k=n/2;k<n+1;k++){
            if(v[k]==0){
                cout << k << " ";
                v[k]=1;
            }
            if(k==n){
                cout << endl;
            }
        }
    }
}