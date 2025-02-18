

#include<iostream>
using namespace std;
#include<map>
#include<vector>
#include<string>
#include<set>
#include<unordered_set>



// ///Duplicate values are allowed and soting also maintain
// int main(){
//     multimap<int,string>up;
//     up.insert({10,"raju"});
//     up.insert({484,"leela"});
//     up.insert({158,"manhoosh"});
//     up.insert({158,"manhoosh"});
//     up.insert({158,"manhoosh"});

//     for (auto p:up){
//         cout<<p.first<<" ";
//         cout<<p.second;
//         cout<<endl;        
//     }
// }

//Duplicate values are not allowed and soting also maintain
// It Work on Single Value only(int ,string)
// there are three type of set 1(ORDER SET) 2 (UNORDER SET)  3(MULTI SET)



 int main(){
   multiset<int>p;
   p.insert(10);
   p.insert(484);
   p.insert(158);
   p.insert(158);
   p.insert(2);

   for (auto p:p){
       cout<<p<<" ";
   } 
}