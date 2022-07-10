#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int findPath(vector<int> v, int a, int b)
{
    int ai=-1;
    int bi=-1;
    for(int i=0;i<v.size();i++){
        if(v[i]==a){
            ai=i;
            break;
        }
    }
    for(int j=ai;j<v.size();j++){
        if(v[j]==b){
            bi=j;
            break;
        }
    }
    if(ai!=-1 && bi!=-1){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
       int n,q;
       cin >> n >> q;
       vector<int> v(n);
       for(int j=0;j<n;j++){
           cin >> v[j];
       }
       for(int k=0;k<q;k++){
           int a,b;
           cin >> a >> b;

           if (findPath(v,a,b)){
               cout << "YES" << endl;
           }
           else{
               cout << "NO" << endl;
           }
       }
    }
}