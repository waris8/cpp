#include<iostream>
#include<vector>
#include <cstdlib>

using namespace std;


int main(){
    int H,W;
    cin >> H >> W;
    bool first = false;
    bool last = false;
    int r,c=-1;
    int topleftR, topleftC, toprightR, toprightC,bottomleftR, bottomleftC,bottomrightR, bottomrightC;
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            char c;
            cin >> c;
            if(c=='#'){
                if(!first){
                    topleftR=i;
                    topleftC=j;
                    first=true;
                    r=i;
                }
                else{
                    if(i>r){
                        r=i;
                    }
                }
            
            }
            else{
                if(first && !last){
                    last = true;
                    toprightR=i;
                    toprightC=j-1;
                    c=j-1;
                }
                else{
                    if(i<=r && j>)
                }
            }
        }
    }
}