#include<bits/stdc++.h>
#include<iostream>
 
using namespace std;
 
int main(){
    int n;
    int q;
    cin >> n;
    cin >> q;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater<int>());
    int x;
    int y;
    for(int j=0;j<q;j++){
        cin >> x;
        cin >> y;
        int sum = 0;
        for(int k=x-1;k>x-1-y;k--){
            sum += v[k];
        }
        cout << sum << endl;
    }
 
    return 0;
}