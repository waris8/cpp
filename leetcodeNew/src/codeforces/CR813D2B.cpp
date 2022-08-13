#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int tc;
    cin >> tc;
    for(int t=0;t<tc;t++){
        int n;
        cin >> n;
        vector<int> v(n,0);
        if(n%2!=0){
            v[0]=1;
            for(int i=2;i<=n;i=i+2){
                v[i-1]=(i+1);
                v[i]=(i);
            }
        }
        else{
            for(int i=1;i<=n;i=i+2){
                v[i-1]=(i+1);
                v[i]=(i);
            }
        }

        for(int k=0;k<n;k++){
            cout << v[k] << " ";
        }
        cout << endl;
    }
}