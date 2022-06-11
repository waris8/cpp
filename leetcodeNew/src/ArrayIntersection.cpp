#include<iostream>
#include<vector>
#include<algorithm>

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

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
      vector<int> result;
      for(int i=0;i<nums1.size();i++){
          int key = findKey(nums2, nums1.at(i));
          if(key != -1){
              result.push_back(nums1.at(i));
              nums1.erase(nums1.begin()+i);
              nums2.erase(nums2.begin()+key);
              i--;
          }
      }
      return result;
}

int main(){
    vector<int> v1 = {1,2,2,1};
    vector<int> v2 = {2,2};
    vector<int> result = intersect(v1,v2);
    for(int j=0;j<result.size();j++){
        cout << result.at(j) << endl;
    }
    return 0;
}