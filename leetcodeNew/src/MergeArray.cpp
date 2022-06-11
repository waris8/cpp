#include<iostream>
#include<vector>

using namespace std;


void swap(vector<int>& v1, vector<int>& v2, int i, int j){
    int temp = v2.at(j);
    v2.at(j)=v1.at(i);
    v1.at(i)=temp;
}

void maintainSorted(vector<int>& v){
    for(int i=0;i<v.size()-1;i++){
        if(v.at(i)>v.at(i+1)){
            swap(v,v,i,i+1);
        }
    }
}
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    if(n==0){
        return;
    }
    for(int i=0;i<m+n;i++){
        if(i<m){
            if(nums1.at(i)>nums2.at(0)){
                swap(nums1,nums2,i,0);
                maintainSorted(nums2);
            }
        }
        else{
            nums1.at(i) = nums2.at(i-m);
        }
    }

}

int main(){
    vector<int> v1 = {4,5,6,0,0,0};
    vector<int> v2 = {1,2,3};
    merge(v1,3,v2,3);
    for(int j=0;j<v1.size();j++){
        cout << v1.at(j) << endl;
    }
    return 0;
}