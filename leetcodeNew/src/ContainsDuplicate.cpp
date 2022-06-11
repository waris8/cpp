#include <iostream>
#include <vector>
#include <set>

using namespace std;

bool containsDuplicate(vector<int>& nums) {
      int n = nums.size();
      set<int> list;
      for(int i=0;i<n;i++){
          list.insert(nums.at(i));
      }  
      if(list.size() != nums.size()){
          return false;
      }
      return true;
}

int main(){
    vector<int> nums = {1,2,3,1};
    cout << containsDuplicate(nums) << endl;
    return 0;
}

