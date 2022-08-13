#include<iostream>
#include<vector>

using namespace std;

int main(){
    int tc;
    cin >> tc;
    for(int t=0;t<tc;t++){
        int n,k;
        cin >> n >> k;
        vector<int> v(n,0);
        for(int j=0;j<n;j++){
            cin >> v[j];
        }
        if(k==n){
            cout << 0 << endl;
        }
        else{
            int res=0;
            for(int i=0;i<n;i++){
                if(i<k && v[i]>k){
                    res++;
                }
            }
            cout << res << endl;
        }
        
    }
}