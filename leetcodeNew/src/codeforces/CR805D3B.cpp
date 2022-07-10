#include<iostream>
#include <set>
#include <string.h>

using namespace std;


int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
      string s;
      cin >> s;
      set<string> x {};
      for(int j=0;j<s.length();j++){
          x.insert(s.substr(j,j+1));
      }
      if(x.size()%3==0){
          cout << x.size()/3 << endl;
      }
      else{
          cout << (x.size()/3) + 1 << endl;
      }
    // int temp=0;
    // while(s.size()-temp>3){
    //     string z = s.substr(temp,temp+3);
    //     for(int j=0;j<z.size();j++){
    //       x.insert(s.at(j));
    //     }
    // }
        

    }
    }
}