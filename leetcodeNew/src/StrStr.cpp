#include <iostream>
#include <string>

using namespace std;

int strStr(string haystack, string needle){
    int n = needle.size();
    if(needle==""){
        return 0;
    }
    if(haystack.size()<needle.size()){
        return -1;
    }
    for(int i=0;i<=haystack.size()-n;i++){
        if(haystack.substr(i,n)==needle){
            return i;
        }
    }
    return -1;
}

int main(){
    string haystack = "c";
    string needle = "c";
    cout << strStr(haystack,needle) << endl;
    return 0;
}
