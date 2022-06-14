#include<iostream>
#include<vector>

using namespace std;

vector<int> fillNums(vector<int> v){
    vector<int> result(v.size()+1);
    int start = 0;
    int end = 0;
    for(int i=0;i<v.size();i++){
        int temp = v[i];
        if(i==0 || i==v.size()-1){
            result[i]=1;
        }
        else{
            
        }
    }
}

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> result;
    for(int i=0;i<numRows;i++){
        vector<int> v(i+1);
        if(i==0){
            v[i]=1;
        }
        else{
            fillNums(result[i-1]);
        }
        result[i]=v;
    }
    return result;
}
int main(){
    return 0;
}