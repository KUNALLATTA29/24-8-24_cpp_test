#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<string> arr = {"listen", "silent", "enlist", "inlets", "rat", "tar", "art", "cat", "act", "tac"};
    map<string,vector<string>> map1;
    for(auto it:arr){
        string s = it;
        sort(s.begin(),s.end());
        map1[s].push_back(it);
    }
    for(auto it:map1){
        for(auto k:it.second){
            cout<<k<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}