#include <bits/stdc++.h>

using namespace std;

int buyChoco(vector<int>& prices, int money) {
    sort(prices.begin(), prices.end());
    if(prices[0]+prices[1]>money){
        return money;
    }
    return money-(prices[0]+prices[1]);
}

int minExtraChar(string s, vector<string>& dictionary) {
    vector<int> v(s.size(),0);
    for(string st : dictionary){
        if (s.find(st) != std::string::npos) {
            int index=0;
            while ((index = s.find(st, index)) != std::string::npos) {
                int start = index;
                int end = start + (st.size());
                cout << s.substr(start, end) << endl;
                for(int j=start;j<end;j++){
                    v[j]=1;
                }
                index += st.length();
            }
            
        }
    }
    int r = 0;
    for(int i : v){
        if(i==0){
            r++;
        }
    }
    
    return r;
}

int main(){
    // string s = "dddaaa";
    // cout << minimizedStringLength(s) << endl;
    // vector<int> v = {3,2,3};
    // cout << buyChoco(v, 3);
    string s = "kevlplxozaizdhxoimmraiakbak";
    vector<string> v = {"yv","bmab","hv","bnsll","mra","jjqf","g","aiyzi","ip","pfctr","flr","ybbcl","biu","ke","lpl","iak","pirua","ilhqd","zdhx","fux","xaw","pdfvt","xf","t","wq","r","cgmud","aokas","xv","jf","cyys","wcaz","rvegf","ysg","xo","uwb","lw","okgk","vbmi","v","mvo","fxyx","ad","e"};
   int result = minExtraChar(s,v);
    cout << result << endl;
    // cout << semiOrderedPermutation(v) << endl;
    return 0;
}