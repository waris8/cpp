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
        vector<int> v(n,0);
        int c=0;
        for(int i=0;i<n;i++){
            int y;
            cin >> y;
            auto it = std::find(v.end(), v.begin(), y);
                v[i]=y;
                if(it!=v.end()){
                    c=it-v.begin();
                }
        }
        // int z=0;
        // vector<int> newv(n,0);
        // for(int j=n-1;j>=0;j--){
        //     if(std::find(newv.begin(), newv.end(), v[j]) == newv.end()){
        //         newv[n-1-j]=v[j];
        //     }
        //     else{
        //         z=j+1;
        //         break;
        //     }
        // }
        cout << c+1 << endl;
    }
}