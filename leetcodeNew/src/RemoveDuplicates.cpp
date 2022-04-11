#include <iostream>
#include <vector>


using namespace std;

int removeDuplicates(vector<int>& nums){
    if(nums.size()<=1){
        return nums.size();
    }
    int* firstptr = &nums.at(0);
    int* secondPtr = &nums.at(1);
    int k=0;
    int n=1;
    while(n!=nums.size()){
        if(secondPtr==nullptr){
            break;
        }
        if(*secondPtr!=*firstptr){
            nums.at(k+1)=*secondPtr;
            k++;
            firstptr = &nums.at(k);
        }
        if(n!=k){
            nums.at(n)=0;
        }
        n++;
        if(nums.size()>n){
            secondPtr = &nums.at(n);
        }
    }
    return k+1;
}

int main(){
    vector<int> v = {1,1,2,2,3,3,3};
    cout << removeDuplicates(v) << endl;
    return 0;
}
