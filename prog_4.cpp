#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr = {2,1,6,3,2,7,5,2,9,3,8,9,10,11,9,10,11};
    map<int,int> map1;
    for(auto it:arr){
        map1[it]++;
    }
    for(auto it:map1){
        cout<<it.first<<" : "<<it.second<<endl;
    }
    
    return 0;
}