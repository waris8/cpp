#include<iostream>
#include <set>

using namespace std;

int main(){
    int tc;
    cin >> tc;
    for(int t=0;t<tc;t++){
        char a,b,c,d;
        cin >> a >> b >> c >> d;
        set<char> s;
        s.insert(a);
        s.insert(b);
        s.insert(c);
        s.insert(d);
        if(s.size()==2){
            cout << 1 << endl;
        }
        else if(s.size()==3){
            cout << 2 << endl;
        }
        else if(s.size()==1){
            cout << 0 << endl;
        }
        else{
            cout << 3 << endl;
        }
    }
}