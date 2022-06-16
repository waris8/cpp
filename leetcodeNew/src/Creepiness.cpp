#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    std::cin >> t;
    for(int i=0;i<t;i++){
        int a, b;   
        cin >> a >> b;
        string s;
        int countA=min(a,b);
        for(int j=0;j<2*countA;j++){
            if(j%2==0){
                s += "0";
            }
            else{
                s += "1";
            }
        }
        if(a>b){
            for(int k=0;k<a+b-2*countA;k++){
                s += "0";
            }
        }
        else{
            for(int k=0;k<a+b-2*countA;k++){
                s += "1";
            }
        }
        cout << s << endl;
    }
    return 0;
}