#include <iostream>
#include <algorithm>
#include <vector>
#include<string>
#include <cstdlib>

using namespace std;

int func(int n){
    return n+n%10;
}

int main()
{
    int t;
    cin >> t;
    for (int x = 0; x < t; x++)
    {
        int n;
        cin >> n;
        vector<int> v(n,0);
        int b=0;
        string ans = "YES";
        for(int i=0;i<n;i++){
            int tmp;
            cin >> tmp;
            if(tmp>b){
                b=tmp;
            }
            v[i]=tmp;
        }
        for(int j=0;j<n;j++){
            while((v[j]%10)!=0 && v[j]<b){
                v[j]=func(v[j]);
            }
            if(v[j]!=b){
                bool res=false;
                int s=b;
                while((s%10)!=0 &&s<v[j]){
                    s=func(s);
                    if(s==v[j]){
                        res=true;
                    }
                }
                if(res==false){
                    ans="NO";
                    break;
                }
            }
        }
        cout << ans << endl;
    }
}