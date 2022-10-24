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
        vector<long long> v(n);
        int zeros = 0;
        for (int j = 0; j < n; j++)
        {
            int tmp;
            cin >> tmp;
            if(tmp==0){
                zeros++;
            }
        }
        long long res = 0;
        for(int k=0;k<n;k++){
            cin >> v[k];

        }
        sort(v.begin(), v.end(), greater<long long>());
        int magic = 2*min(zeros,n-zeros)-1;
        for(int l=0;l<n;l++){
            if(magic>0){
                res += 2*v[l];
                magic--;
            }
            else{
                res += v[l];
            }
        }
        cout << res << endl;
    }
}