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
        bool sort = false;
        int tmp=INT_MIN;
        int first=tmp;
        string result = "";
        for(int j=0;j<n;j++){
            int x;
            cin >> x;
            if(j==0){
                first = x;
                result.append("1");
                tmp = x;
            }
            else if(x<tmp && !sort && x<first){
                sort = true;
                result.append("1");
                tmp = x;
            }
            else if(x<tmp && !sort && x>first){
                result.append("0");
            }
            else if((sort && x>first) || (sort && x<tmp)){
                result.append("0");
                
            }
            else{
                result.append("1");
                tmp = x;
            }
            
        }
        cout << result << endl;
    }
}