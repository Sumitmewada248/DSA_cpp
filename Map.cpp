#include<iostream>
using namespace std;
#include<map>

/// Map :
/// 1. It is Associative Container.
/// 2. It uses Pair value i.e KEY,VALUE
/// 3. It can display the data in Sorted Order
/// 4. It use SElf balanced Binary Search tree order
/// 5. Key is always unique but Values may be duplicate
/// 6. There are three type of Map 1(ORDER MAP) 2 (UNORDER MAP)  3(MULTI MAP)

int main(){

map<int ,string> mp;
/*mp.insert({10,"raju"});
mp.insert({484,"leela"});
mp.insert({158,"manhoosh"});
*/

mp[101]="amit";
mp[121]="sona";
mp[5]="moti";


map<string,int>mp1;

mp1["raju"]=10;
mp1["leela"]=20;
mp1["manhoosh"];

for(auto p:mp1){
cout<<p.first<<" ";
cout<<p.second;
cout<<endl;
}
cout<<endl;

for(auto p:mp){
cout<<p.first<<" "; 
cout<<p.second;
cout<<endl;

}

mp.erase(101);
cout<<"After erase \n"; 
for(auto p:mp){
    cout<<p;
}
}
