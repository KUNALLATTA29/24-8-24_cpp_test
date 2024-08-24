#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr = {35, 45, 70, 80, 90, 28, 66, 49, 53, 52, 57, 78};
    map<string,vector<int>> map1;
    for(auto it:arr){
        if(it>65){
            map1["Obesity"].push_back(it);
        }else if(45<=it && it<=65 ){
            map1["Healthy"].push_back(it);
        }else{
            map1["Ricket"].push_back(it);
        }
    }
    for(auto it:map1){
        cout<<it.first<<" : ";
        for(auto i:it.second){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}