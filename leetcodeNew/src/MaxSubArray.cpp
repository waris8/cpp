#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int maxSubArray(vector<int>& nums) {
         int sum = nums.at(0);
        int temp = 0;
        int maxSum = nums.at(0);
        if(nums.size()==1){
            return nums.at(temp);
        }
        while(true){
            if(temp==nums.size()){
                break;
            }
            int a = nums.at(temp);
            if(sum < 0 && a >= 0){
                sum = a;
            }
            else if(sum >= 0){
                sum += a;
            }
            maxSum = max(sum,maxSum);
            temp++;
        }
        return maxSum;
    }
};

int main(){
    cout << "welcome" << endl;
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << maxSubArray(nums) << endl;
    return 0;
}
