#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

 
int findKey(vector<int>& v, int key)
{ 
    vector<int>::iterator itr = find(v.begin(), v.end(), key);
 
    if (itr != v.cend()) {
        return distance(v.begin(), itr);
    }
    else {
        return -1;
    }
 
    return 0;
}

vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            int temp = target-nums.at(i);
            int index = findKey(nums,temp);
            if(index!=-1 && index!=i){
                result.push_back(index);
                result.push_back(i);
                return result;
            }
        }
        return result;
}


int main(){
    vector<int> v = {2,7,11,15};
    vector<int> result = twoSum(v, 17);
    cout << result.at(0) << "  " <<result.at(1) << endl;
    return 0;
}
