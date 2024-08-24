#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s;
    getline(cin,s);
    map<string,int> map1;
    stringstream ss(s);
    string word;
    
    while(ss >> word){
        map1[word]++;
    }
    for(auto it:map1){
        cout<<it.first<<" : "<<it.second<<endl;
    }
    
    return 0;
}