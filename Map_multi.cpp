

#include<iostream>
using namespace std;
#include<map>
#include<vector>
#include<string>

///Duplicate values are allowed and soting also maintain
int main(){
    multimap<int,string>up;
    up.insert({10,"raju"});
    up.insert({484,"leela"});
    up.insert({158,"manhoosh"});
    up.insert({158,"manhoosh"});
    up.insert({158,"manhoosh"});

    for (auto p:up){
        cout<<p.first<<" ";
        cout<<p.second;
        cout<<endl;        
    }
}