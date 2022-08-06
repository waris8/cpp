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
        int xplusM = 0, yplusM = 0, xminusM = 0, yminusM = 0;
        for(int i=0;i<n;i++){
            int a,b;
            cin >> a >> b;
            if(a>0 && abs(a)>xplusM){
                xplusM=abs(a);
            }
            else if(a<0 && abs(a)>xminusM){
                xminusM=abs(a);
            }
            else if(b>0 && abs(b)>yplusM){
                yplusM=abs(b);
            }
            else if(b<0 && abs(b)>yminusM){
                yminusM=abs(b);
            }
        }
        int ans = 2*xplusM + 2*xminusM + 2*yplusM + 2*yminusM;
        cout << ans << endl;
    }
}