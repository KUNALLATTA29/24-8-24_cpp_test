#include<bits/stdc++.h>
using namespace std;

vector<int> sol(vector<int> arr, int target){
    map<int,int> map1;
    for(int i=0;i<arr.size();i++){
        int ans = target -arr[i];
        if(map1.find(ans) != map1.end()){
            return {map1[ans],i};
        }
        
        map1[arr[i]] = i;
    }
    return {};
    
}

int main(){
    
    vector<int> arr = {1,2,3,4,5,6,7,7,8,1,2,3};
    int target = 8;
    vector<int> ans = sol(arr,target);
    for(auto it:ans){
        cout<<it<<" ";
    }
    
    return 0;
}