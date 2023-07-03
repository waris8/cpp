#include<iostream>
#include <bits/stdc++.h>


using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> v(n,0);
    int res = 0;
    int a,b;
    int sum=0;


    for(int i=0;i<n;i++){
        cin >> v[i];
        if(i==0){
            a=v[i];
        }
        if(i==1){
            b=v[i];
        }
        if(i>1){
            if(v[i]>=a && v[i]<=b){
                res++;
            }
        }
    }
    if(res!=m){
        vector<int> q;
        sort(v.begin()+2, v.end());
        for(int j=2;j<n;j++){
            if(v[j]<a){
                q.push_back(-(a-v[j]));
            }
            if(v[j]>b){
                q.push_back(v[j]-b);
            }
        }
        int count =0;
        int tmpp=0;
        int tmpn=0;
        while(res<m){
            if(q[count]>0){
                sum += q[count]-tmpp;
                res ++;
                tmpp = q[count];
            }
            else if(q[count]<0){
                sum += abs(q[count])-tmpn;
                res ++;
                tmpn = abs(q[count]);
            }
            count++;
        }

    }
    cout << sum << endl;
    return 0;
}