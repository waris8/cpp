#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<stack>

using namespace std;

auto adjMat(int n, vector<vector<int>>& edges){
    vector<vector<int>> v(n, vector<int>(n,0));
    for(auto e : edges){
        v[e[0]][e[1]]=1;
    }
    return v;
}

bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
    auto m = adjMat(n,edges);
    stack<int> s;
    bool result=false;
    vector<int> visited(n,0);
    s.push(source);
    while(!s.empty()){
        int t = s.top();
        if(t==destination){
            result=true;
            break;
        }
        s.pop();
        visited[t]=1;
        for(int i=0;i<n;i++){
            if(m[t][i]==1 && visited[i]==0){
                s.push(i);
                visited[i]=1;
            }
        }
    }
    return result;
}

bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
    auto m = adjMat(numCourses, prerequisites);
    vector<int> visited(numCourses,0);
    stack<int> s;
    bool result=true;
    int start = 0;
    int sum=0;
    while(sum<numCourses){
        s.push(start);
        visited[start]=1;
        sum++;
        while(!s.empty()){
            int t = s.top();
            s.pop();
            int sm=0;
            for(int i=0;i<numCourses;i++){
                if(m[t][i]==1 && visited[i]==1){
                    result = false;
                    break;
                }
                else if(m[t][i]==1 && visited[i]==0){
                    s.push(i);
                    visited[i]=1;
                    sum++;
                }
                sm += m[t][i];
            }
            if(sm==0){
                sum++;
            }
        }
    }
    return result;
}


int main(){
    vector<vector<int>> v;
    vector<int> a = {1,0};
    vector<int> b = {0,1};
    // vector<int> c = {2,0};
    v.push_back(a);
    v.push_back(b);
    // v.push_back(c);
    // auto r = gardenNoAdj(4, v);
    // int r = findCenter(v);
    // bool r = validPath(3,v,0,2);
    bool r = canFinish(2,v);
    return 0;
}