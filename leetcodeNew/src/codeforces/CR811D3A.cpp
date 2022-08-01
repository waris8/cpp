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
        int n,h,m;
        cin >> n >> h >> m;
        int hs=-1;
        int ms=-1;
        for(int i=0;i<n;i++){
            int ht,mt;
            cin >> ht >> mt;
            int temph,tempm;
            if(ht>h && mt<m){
                temph= ht-h-1;
                tempm=(60-m)+mt;
            }
            else if(ht>=h && mt>=m){
                temph=ht-h;
                tempm=mt-m;
            }
            else if(ht<h && mt<m){
                temph=(24+ht)-h-1;
                tempm=(60+mt)-m;
            }
            else if(ht<h && mt>=m){
                temph=(24+ht)-h;
                tempm=mt-m;
            }
            if((hs==-1 && ms==-1) || (temph<=hs && tempm<=ms)|| (temph<=hs && tempm>ms)){
                hs=temph;
                ms=tempm;
            }
        }
        cout << hs << " " << ms << endl;
    }
}