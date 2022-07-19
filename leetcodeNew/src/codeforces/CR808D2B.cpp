#include<iostream>
#include <vector>

using namespace std;


int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
      int n,l,r;
      cin >> n >> l >> r;
      if(r-l+1<n){
          cout << "NO";
      }
      else{
        cout << "YES" << endl;
        vector<int> v(n);
        int temp = 0;
        for(int j=0;j<n;j++){
            for(int k=l;k<=r;k++){
                if(k%(j+1)==0 && temp<n){
                    cout << k << " " ;
                    temp++;
                    break;
                }
            }
        }
      }
      cout << endl;
    }
}