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
        cin >> n;
        string res="YES";
        vector<int> v(n,0);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        // if(n>2){
            for(int j=0;j<n-2;j++){
                if(v[j+1]<v[j] && v[j+2]>v[j+1]){
                    res="NO";
                    break;
                }
            }
        // }
        cout << res << endl;
    }
}