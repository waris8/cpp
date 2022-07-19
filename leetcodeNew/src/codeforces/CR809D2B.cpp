#include<iostream>
#include <vector>
#include <unordered_map>

using namespace std;


int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        unordered_map<int, int> umap;
        for(int j=0;j<n;j++){
            // int tmp;
            // cin >> tmp;
            umap[j+1]=0;
        }
        for(int j=0;j<n;j++){
            int tmp;
            cin >> tmp;
            umap[tmp]++;
        }
        for (auto x : umap)
        cout << x.second << " "  << endl;
    }
}