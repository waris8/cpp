#include<iostream>
#include<vector>
#include<limits.h>


using namespace std;

string removeTrailingZeros(string num) {
    int x=-1;
    for(int i=num.size()-1;i>=0;i--){
        if(num[i]!='0'){
            return num.substr(0,i+1);
        }
    }
    return num;
}

int main(){
    // string s = "dddaaa";
    // cout << minimizedStringLength(s) << endl;
    // vector<int> v = {1,3,4,2,5};
    string s = "1230000";
    cout << removeTrailingZeros(s) << endl;;
    // cout << semiOrderedPermutation(v) << endl;
    return 0;
}

