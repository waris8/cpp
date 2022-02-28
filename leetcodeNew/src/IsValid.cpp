#include <string>
#include <iostream>
#include <stack>
#include <unordered_map>

using namespace std;


bool isValid(string str){
    unordered_map<char, int> umap;
    umap['(']=0;
    umap['[']=1;
    umap['{']=2;
    umap[')']=0;
    umap['}']=2;
    umap[']']=1;
    stack<char> stk;
    for(int i=0;i<str.size();i++){
        if(str[i] == '(' || str[i] == '[' || str[i] == '{'){
            stk.push(str[i]);
        }
        else{
            if(!stk.empty() && umap[stk.top()]==umap[str[i]]){
                stk.pop();
            }
            else{
                return false;
            }
        }
    }
    if(stk.empty()){
        return true;
    }
    return false;
}
int main(){
    string str = "}";
    string str1 = "({[]})";
    string str2 = "({)}";
    cout << isValid(str) << endl;
    cout << isValid(str1) << endl;
    cout << isValid(str2) << endl;
    return 0;
}
