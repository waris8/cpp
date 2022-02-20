#include<iostream>
#include<vector>

using namespace std;

int searchInsert(vector<int>& nums, int target){
    if(nums.empty()){
        return 0;
    }
    if(target < nums.front()){
        return 0;
    }
    else if(target > nums.back()){
        return nums.size();
    }
    else{
        int n = nums.size();
        int l=0;
        int r=n-1;
        while(true){
            n = (r+l)/2;
            if(nums.at(n)==target){
                return n;
            }
            if(nums.at(l)==target){
                return l;
            }
            if(nums.at(r)==target){
                return r;
            }
            else if(nums.at(n)>target && nums.at(n-1)<target){
                return n;
            }
            else if(nums.at(n)<target && nums.at(n+1)>target){
                return n+1;
            }
            else if(nums.at(n)>target && nums.at(n-1)>=target){
                r=n;
            }
            else{
                l=n;
            }
        }
    }
    return 0;
}

int main(){
    vector<int> v = {1,3};
    cout << searchInsert(v,3) <<endl;
    return 0;
}