#include<iostream>
#include <cstdlib>
#include <vector>
#include <unordered_map>
#include <fstream>

using namespace std;

int main(){
    ifstream infile;
    infile.open("second_hands_input.txt");
    int tc;
    cin >> tc;
    for(int t=0;t<tc;t++){
        int n,k;
        cin >> n >> k;
        string res="YES";
        vector<int> v(n,0);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        if(2*k<n){
            res="NO";
        }
        else{
            
            unordered_map<int, int> umap;
            for(int j=0;j<n;j++){
                umap[v[j]] += 1;
                if(umap[v[j]]>2){
                    res="NO";
                    break;
                }
            }
        }
        cout << "Case #" << t+1 << ": " << res << endl; 
    }
}