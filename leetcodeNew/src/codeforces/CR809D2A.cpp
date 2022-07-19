#include<iostream>
#include <vector>

using namespace std;


int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n,m;
        cin >> n >> m;
        string s = "";
        for(int j=0;j<m;j++){
            s.append("B");
        }
        for(int k=0;k<n;k++){
            int temp;
            cin >> temp;
                if(temp-1<=m-temp && s[temp-1]=='B'){
                        s[temp-1] = 'A';
                   
                }
                else if(temp-1>m-temp && s[m-temp]=='B'){
                    s[m-temp] = 'A';
                }
                else if(s[temp-1]=='A'){
                    s[m-temp] = 'A';
                }
                else{
                    s[temp-1]='A';
                }
                // else{
                //     if(s[temp-1]=='A' || temp-1>m-temp){
                //         s[m-temp]='A';
                //     }
                //     else{
                //         s[temp-1]='A';
                //     }
                // }
            
        }
        cout << s << endl;
    }
}