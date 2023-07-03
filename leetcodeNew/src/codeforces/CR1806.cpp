#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int count_diff(string a, string b){
    int count = 0;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]){
            count++;
        }
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int res=0;
        int n;
        cin >> n;
        string s,t;
        cin >> s >> t;
        string rev_t = t;
        reverse(rev_t.begin(), rev_t.end());
        if(s!=t && s!=rev_t){
            int norm_diff = count_diff(s,t);
            int rev_diff = count_diff(s,rev_t);
            int diff = min(norm_diff,rev_diff);
            res = diff + (diff/2);
            if(norm_diff!=rev_diff){
                if(diff == norm_diff && (diff/2)%2!=0){
                    res++;
                }
                else if(diff == rev_diff && (diff/2)%2==0){
                    res++;
                }
            }
        }
        cout << res << endl;
    }
}