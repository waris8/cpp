#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int num = 0;
        int temp = 0;
        int timur = 0;
        for(int j=0;j<4;j++){
            cin >> temp;
            if(j==0){
                timur = temp;
            }
            if(j>0 && temp>timur){
                num++;
            }
        }
        cout << num << endl;
    }
    return 0;
}