#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr;
    for(int i=0;i<10;i++){
        int k;
        cin>>k;
        arr.push_back(k);
    }
    map<int,int> map1;
    for(auto it:arr){
        map1[it]++;
    }
    int maxi=0;
    int ele=0;
    for(auto it:map1){
        if(it.second>maxi){
            maxi=it.second;
            ele = it.first;
        }
    }
    cout<<ele;
    
    return 0;
}