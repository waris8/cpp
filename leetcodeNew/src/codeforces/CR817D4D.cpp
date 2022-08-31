#include <iostream>
#include<vector>

using namespace std;

long long val(string s){
    long long sum=0;
       for(int i=0;i<s.size();i++){
           if(s[i]=='L'){
               sum += i;
           }
           else{
               sum += s.size()-(i+1);
           }
       }
       return sum;
}

long long operate(string s, int k){
    int res=0;
    int right=0;
    int left=0;
    while(true){
        if(res==k || right+left==s.size()){
            break;
        }
        if(left==right){
            if(s[left]!='R'){
               s[left]='R';
                res++; 
                
            }
            left++;
        }
        else{
            if(s[s.size()-(right+1)]!='L'){
                 s[s.size()-(right+1)]='L';
                res++;
                
            }
            right++;
        }
    }
    return val(s);
}

int main()
{
    int tc;
    cin >> tc;
    for (int t = 0; t < tc; t++)
    {
       int n;
       cin >> n;
       string s;
       cin >> s;
       for(int k=1;k<=n;k++){
           long long value=operate(s,k);
           cout << value << " ";
       } 
       cout << endl;
    }
}