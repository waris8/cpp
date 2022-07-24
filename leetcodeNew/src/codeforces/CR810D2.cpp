#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
       int n;
       cin >> n;
       vector<int> v(n);
       for(int j=0;j<n;j=j+2){
           v[j]=j+2;
           v[j+1]=j+1;
       }
       if(n%2!=0){
           v[n-1]=1;
           v[1]= n;
       }
       for(int k=0;k<n;k++){
           cout << v[k] << " ";
       }
       cout << endl;
    }
}