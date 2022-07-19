#include<iostream>

using namespace std;


int main(){
    string s;
    cin >> s;
    char c = s[0];
    if(s[1]==c){
        if(s[2]!=c){
            cout << s[2] << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    else{
        if(s[2]==c){
            cout << s[1] << endl;
        }
        else{
            cout << c << endl;
        }
    }
}