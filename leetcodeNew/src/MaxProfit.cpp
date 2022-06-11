#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int maxProfit(vector<int>& prices) {
    int low = prices.at(0), result = 0, diff = 0;
    for(int i=1;i<prices.size();i++){
        if(prices.at(i)<low){
            low = prices.at(i);
        }
        else{
            diff = prices.at(i)-low;
            result = max(diff, result);
        }
    }
    return result;
}

int main(){
    vector<int> v = {7,6,4,3,1};
    cout << maxProfit(v) << endl;
    return 0;
}