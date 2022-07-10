#include<iostream>
#include<math.h>
#include <bits/stdc++.h>

using namespace std;

int countDigit(int n) {
  return floor(log10(n) + 1);
}

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
       int a;
       cin >> a;
       cout << fixed;
       cout << setprecision(0);
       cout << a - pow(10,countDigit(a)-1) << endl;
    }
}