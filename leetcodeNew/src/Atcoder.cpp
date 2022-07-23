#include<iostream>
#include <unordered_map>
using namespace std;

int main(){
    int n;
    cin >> n;
    unordered_map<string, int> umap;   
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        if(umap.find(s) == umap.end()){
            umap[s]=1;
            cout << s << endl;
        }
        else{
            int val = umap[s];
            cout << s + "(" + to_string(val) + ")" << endl;
            umap[s] += 1;
        }
    }
}