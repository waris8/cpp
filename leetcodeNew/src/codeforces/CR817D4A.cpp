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
        vector<vector<char>> v(2,vector<char> (n,'x'));
        for(int i=0;i<2;i++){
            for(int j=0;j<n;j++){
                cin >> v[i][j];
            }
        }
        string res="YES";
        for(int z=0;z<n;z++){
            char d1= v[0][z];
            char d2 = v[1][z];
            if((v[0][z]=='G' || v[0][z]=='B') && (v[1][z]!='G' && v[1][z]!='B')){
                res="NO";
            }
            else if((v[0][z]!='G' && v[0][z]!='B') && (v[1][z]=='G' || v[1][z]=='B')){
                res="NO";
            }
        }
        cout << res << endl;
    }
}