#include<iostream>
#include<vector>
#include <algorithm>

// using namespace std;

int main(){
    int t;
    std::cin >> t;
    for(int i=0;i<t;i++){
        int n;
        std::cin >> n;
        std::vector<int> v(0);
        int temp=0;
        int nums=0;
        for(int j=0;j<n;j++){
            std::cin >> temp;
            // std::find(v.begin(), v.end(), temp) != v.end();
            int x = std::count(v.begin(), v.end(), temp);
            if(j==0){
                v.push_back(temp);
            }
            else if(j>0 && x==0){
                v.push_back(temp);
            }
            else{
                nums++;
            }
        }
        if(nums%2==0){
            std::cout << v.size() << std::endl;
        }
        else{
            std::cout << v.size()-1 << std::endl;
        }
    }
    return 0;
}