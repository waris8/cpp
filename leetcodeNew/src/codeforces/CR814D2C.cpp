#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool checkForBig(vector<int> &v, int id){
    for(int i=0;i<id;i++){
        if(v[i]>v[id-1]){
            return true;
        }
    }
    return false;
}

int check(vector<int> &v, int id, int k){
    int res=0;
    if(checkForBig(v,id)){
            return res;
    }
    for(int i=id;i<=k;i++){
        if(v[id-1]>v[i]){
            res++;
        }
        else{
            break;
        }
    }
    return res;
}



int main(){
    int tc;
    cin >> tc;
    for(int t=0;t<tc;t++){
        int n,q;
        cin >> n >> q;
        vector<int> v(n,0);
        int m=0;
        for(int i=0;i<n;i++){
            cin >> v[i];
            if(v[i]>m){
                m=i;
            }
        }
        for(int j=0;j<q;j++){
            int id,k;
            cin >> id >> k;
            if(id>m || id>k){
                cout << 0 << endl;
            }
            else if(id==m && k>n-1){
                cout << (n-id)+(k-(n-1)) << endl;
            }
            else{
                cout << check(v,id,k) << endl;
            }
        }
    }
}