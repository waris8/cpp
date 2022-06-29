#include<iostream>
#include<vector>
#include <bits/stdc++.h>
#include<numeric>

using namespace std;

int find_all_triplets(int arr[], int n, int sum)
{
for (int i = 0; i < n-1; i++) {

unordered_set<int> s;
for (int j = i + 1; j < n; j++) {
int x = sum-(arr[i] + arr[j]);
if (s.find(x) != s.end())
    return 0;
else
s.insert(arr[j]);
}
return 1;
}
}

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
      int n;
      cin >> n;
      int arr[n];
      for(int j=0;j<n;j++){
          cin >> arr[j];
      }
      vector<int> v = {};
      for(int k=0;k<n;k++){
        v.push_back(find_all_triplets(arr,n,arr[k]));
      }
      if(accumulate(v.begin(),v.end(),0)==0){
          cout<< "YES" << endl;
      }
      else{
          cout<< "NO" << endl;
      }
    }
    return 0;
}
