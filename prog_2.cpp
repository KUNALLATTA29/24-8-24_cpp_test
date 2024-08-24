#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr = {12,21,32,23,56,65,76,67};
    map<int,vector<int>> map1;
    
    for(auto it:arr){
        string s=to_string(it);
        int key=0;
        for(auto k:s){
            int x =k-'0';
            key+=x;
        }
        map1[key].push_back(it);
    }
    for(auto it:map1){
        for(auto k:it.second){
            cout<<k<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}