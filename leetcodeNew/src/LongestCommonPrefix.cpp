#include <iostream>
#include <string>
#include <vector>

using namespace std;

string LongestCommonPrefix(vector<string>& strs){
    string common = strs[0];
    int count = common.size();
    for(int i=1;i<strs.size();i++){
        for(int j=0;j<count;j++){
            if(strs[i][j] != common[j]){
                count = j;
            }
        }
    }
    return common.substr(0,count);
}

int main(){
    cout << "hello !!" << endl;
    vector<string> strs = {"lower","flow","floght"};
    vector<string>* ptr = &strs;
    cout << LongestCommonPrefix(strs) << endl;
    return 0;
}