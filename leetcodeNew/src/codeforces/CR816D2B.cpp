#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int tc;
    cin >> tc;
    for(int t=0;t<tc;t++){
        long long n,k,b,s;
        cin >> n >> k >> b >> s;
        vector<long long> v(n,0);
        if(n==k && s!=0 && s%n==0 ){
            for(int j=0;j<n;j++){
                v[j]=s/n;
            }
        }
        else if(s/k<b || (n-1)*(k-1)<(s-(b*k))){
            cout << -1 << endl;
        }
        else{
            v[0]=b*k;
            long long sum=v[0];
            long long c=1;
            while(sum<s){
                if(s-sum>=k-1){
                    v[c]=k-1;
                    sum += k-1;
                }
                else{
                    v[c]=s-sum;
                    break;
                }
                c++;
            }
            for(int i=0;i<n;i++){
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }
}