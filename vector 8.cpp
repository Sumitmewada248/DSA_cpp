
#include<iostream>
using namespace std;
#include<algorithm>
#include<forward_list>
#include <vector>

void unq(vector <int>&v){

forward_list<int> f;
for(int i=0;i<v.size();i++){
    f.push_front(v[i]);

}
f.sort();
f.unique();

for(auto p:f)
{

    cout<<p<<"\t";
}



}
int main(){
   /* forward_list <int>f1;
    f1.push_front(23);
       f1.push_front(21);
        f1.push_front(25);
        f1.push_front(39);
        f1.push_front(21);
        f1.push_front(23);
   for (auto p:f1){
    cout<<p<<"\t";
    }

   f1.sort();
   f1.unique();
   cout<<endl<<" unique value \n";

   for(auto p:f1){
    cout<<p<<"\t";
   }
*/

vector<int>v;
int n,data;
cout<<"enter size \n";
cin>>n;
for(int i=0;i<n;i++){
    cin>>data;
    v.push_back(data);

}
unq(v);
}
