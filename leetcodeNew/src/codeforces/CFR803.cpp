#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
       int n;
       int k;
       cin >> n;
       cin >> k;
       int result=0;
       if(k==1){
           cout << (n-1)/2 << endl;
           break;
       }
       else{
           vector<int> v(n);
           int temp;
           for(int j=0;j<n;j++){
               cin >> temp;
               v[j] = temp;
           }
           for(int k=0;k<n;k++){
               if(k>0 && k<n-1){
                   if(v[k-1]+v[k+1]<v[k]){
                       result++;
                   }
               }
           }
           cout << result << endl;
       }
    }
    return 0;
}