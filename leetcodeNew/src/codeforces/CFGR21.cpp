#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        int num = 0;
        int temp;
        int tempBefore = -1;
        for(int j=0;j<n;j++){
            cin >> temp;
            if(j!=0 && tempBefore!=0 && tempBefore!=-1 && temp==0){
                num++;
            }
            if(j==n-1 && temp!=0){
                num++;
            }
            tempBefore=temp;
        }
        cout << num << endl;
    }
    return 0;
}