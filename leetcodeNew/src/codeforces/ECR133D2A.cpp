#include <iostream>
#include <algorithm>
#include <vector>
#include<string>
#include <cstdlib>

using namespace std;


int main()
{
    int t;
    cin >> t;
    for (int x = 0; x < t; x++)
    {
        int n;
        int res=0;
        cin >> n;
        if(n==1){
            res=2;
        }
        else if(n==2){
            res=1;
        }
        else if(n==4){
            res=2;
        }
        else if(n%3==0){
            res=n/3;
        }
        else if(n%3==1){
            res = (n-3)/3 + 2;
        }
        else{
            res=n/3 + 1;
        }
        cout << res << endl;
    }
}