#include <iostream>
#include <bits/stdc++.h>

using namespace std;


long long sqrtSearch(long long low, long long high, long long N)
{
 
    // If the range is still valid
    if (low <= high) {
 
        // Find the mid-value of the range
        int mid = (low + high) / 2;
 
        // Base Case
        if ((mid * mid <= N)
            && ((mid + 1) * (mid + 1) > N)) {
            return mid;
        }
 
        // Condition to check if the
        // left search space is useless
        else if (mid * mid < N) {
            return sqrtSearch(mid + 1, high, N);
        }
        else {
            return sqrtSearch(low, mid - 1, N);
        }
    }
    return low;
}

int main()
{
    int tc;
    cin >> tc;
    for (int t = 0; t < tc; t++)
    {
        long long l,r;
        cin >> l >> r;
        long long res=0;
        while(l<=r){
            if(l%sqrtSearch(1,l,l)==0){
                res++;
            }
            l++;
        }
        cout << res << endl;
    }
}


