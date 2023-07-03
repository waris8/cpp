#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
       int n;
       cin >> n;
       vector<int> v(n,0);
       for(int j=0;j<n;j++){
        cin >> v[j];
       }
       sort(v.begin(), v.end());
       int sum = 0;
       for(int k=0;k<v.size()/2;k++){
        sum += v[v.size()-1-k]-v[k];
       }
       cout << sum << endl;
    }
}