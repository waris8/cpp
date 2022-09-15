#include <iostream>
#include<vector>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    for (int t = 0; t < tc; t++)
    {
       int n;
       cin >> n;
       int max=0;
       int min=1000;
        for(int i=0;i<n;i++){
            int tmp;
            cin >> tmp;
            if(tmp<min){
                min=tmp;
            }
            if(tmp>max){
                max=tmp;
            }
        }
        cout << max-min << endl;    
    }
}