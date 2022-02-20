#include <iostream>
#include <vector>

using namespace std;

int removeElement(vector<int>& nums, int val){
    if(nums.size()<=1){
        if(nums.size()==1 && nums.at(0)==val){
            nums.pop_back();
        }
        return nums.size();
    }
    int k=0;
    int n=nums.size()-1;

    while(n!=k){
      if(nums.at(k)!=val && nums.at(n)!=val){
          k++;
      }
      else if(nums.at(k)!=val && nums.at(n)==val){
          nums.at(n)=0;
          n--;
      }
      else if(nums.at(k)==val && nums.at(n)==val){
          nums.at(n)=0;
          n--;
      }
      else{
          nums.at(k)=nums.at(n);
          nums.at(n)=0;
          n--;
          k++;
      }
    }
    return k+1;
}

int main(){
    cout << "welcome" << endl;
    vector<int> v = {3,3};
    cout << removeElement(v,3) << endl;
    return 0;
}

//  if(nums.at(k)==val && nums.at(n)!=val)