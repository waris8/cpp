#include <iostream>
#include <bits/stdc++.h>

using namespace std;



int main()
{
    int tc;
    cin >> tc;
    for (int t = 0; t < tc; t++)
    {
        int n;
        cin >> n;
        int first=0;
        int second=0;
        for(int i=0;i<n;i++){
            int tmp;
            cin >> tmp;
            if(tmp==1){
                first++;
            }
        }
        for(int j=0;j<n;j++){
            int temp;
            cin >> temp;
            if(temp==1){
                second++;
            }
        }
        cout << abs(first-second) << endl;
    }
}


