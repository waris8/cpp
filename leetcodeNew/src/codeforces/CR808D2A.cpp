#include<iostream>
#include <vector>

using namespace std;


int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
      int n;
      cin >> n;
      int a;
      cin >> a;
      string result = "YES";
      for(int j=1;j<n;j++){
          int temp;
          cin >> temp;
          if(temp%a!=0){
              result = "NO";
          }
      }
      cout << result << endl;
    }
}