#include<iostream>

using namespace std;

// int dist(int x1, int y1, int x2, int y2){
//     return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
// }

int main(){
    int n;
    cin >> n;
    if(n<1000){
        n=n;
    }
    if(n>=1000 && n<10000){
        n = n-(n%10);
    }
    if(n>=10000 && n<100000){
        n = n-(n%100);
    }
    if(n>=100000 && n<10000000){
        n = n-(n%1000);
    }
    if(n>=1000000 && n<10000000){
        n = n-(n%10000);
    }
    if(n>=10000000 && n<100000000){
        n = n-(n%100000);
    }
    if(n>=100000000 && n<=999999999){
        n = n-(n%1000000);
    }
    cout << n << endl;
    return 0;
    // int n,d;
    // cin >> n >> d;
    // int x,y;
    // cin >> x >> y;
    // cout << "YES" << "\n";
    // for(int i=1;i<n;i++){
    //     int a,b;
    //     cin >> a >> b;
    //     int f = dist(x,y,a,b);
    //     if(f<=d){
    //         cout << "YES" << "\n";
    //     }
    //     else{
    //         cout << "NO" << "\n";
    //     }
    // }
    // cout << endl;
}