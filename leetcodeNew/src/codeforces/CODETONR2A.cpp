#include <iostream>
#include <algorithm>
#include <vector>
#include<string>

using namespace std;


int main()
{
    int t;
    cin >> t;
    for (int x = 0; x < t; x++)
    {
        int n,m;
        cin >> n >> m;
        string a,b;
        cin >> a >> b;
        string res="NO";
        if(a.substr(0,n-m+1).find(b[0])!= string::npos && a.substr(n-m+1,n)==b.substr(1,m)){
            res="YES";
        }
        cout << res << endl;
    }
}