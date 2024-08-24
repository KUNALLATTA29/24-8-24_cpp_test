#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr = {1,2,5,4,8,19,2,1,8,4,2,7,5,6,2,1,7,5,6};
    int th = 2;
    map<int,int> map1;
    for(auto it:arr){
        map1[it]++;
    }
    
    for(auto it:map1){
        if(it.second>th){
            cout<<it.first<<" ";
        }
    }
    
    return 0;
}