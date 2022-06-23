#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        int arr[n];
        int temp;
        for(int j=0;j<n;j++){
            cin >> temp;
            arr[j] = temp;
        }
        string result = "YES";
        int f;
        cin >> f;
        int diff = arr[0]-f;
        for(int k=1;k<n;k++){
            cin >> f;
            if(f!=0 && arr[k]-f != diff){
                result = "NO";
                break;
            }
            if(f==0 && arr[k]-f > diff){
                result = "NO";
                break;
            }
        }
        cout << result << endl;
    }
    return 0;
}