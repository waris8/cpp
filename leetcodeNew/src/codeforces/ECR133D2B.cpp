#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cstdlib>

using namespace std;

void swapv(vector<int> &v, int i, int j){
    int tmp=v[i];
    v[i]=v[j];
    v[j]=tmp;
}

void printv(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
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
        for(int i=0;i<n;i++){
            v[i]=i;
        }
        int res=0;
        res=(n/2)+1;
        printv(v);
        for(int j=0;j<res-1;j++){
            swapv(v,j,n-j-1);
            printv(v);
        }
        if(n%2!=0){
            res++;
            swapv(v,(n/2)+1,0);
            printv(v);
        }
    }
}