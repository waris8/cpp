#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int robrecur(vector<int>& nums, vector<int>& dp, int start, bool flag){
    if(start>=nums.size() || (start==nums.size()-1 && flag==true)){
        return 0;
    }
    int a = nums[start] + robrecur(nums, dp, start+2, flag);
    int b=0;
    if(start!=nums.size()-1){
        b = nums[start+1] + robrecur(nums, dp, start+3, flag);
    }
    return max(a,b);
}

int rob(vector<int>& nums) {
    if(nums.size()==1){
        return nums[0];
    }
    vector<int> dp(nums.size(),0);
    return max(robrecur(nums, dp, 0, true), robrecur(nums, dp, 1, false));
}

int main(){
    cout << "hello world" << "\n";
    vector<int> v = {2,1,1,2};
    int r = rob(v);
    cout << "result is : " << r << endl; 
    return 0;
}