#include<iostream>
using namespace std;
#include<map>

int main(){
map<string,int>mp;
string name;
int mob,n;

cout<<"enter how many recodes : ";
cin>>n;

for(int i=1;i<=n;i++){
    cout<<"enter name"<<endl;
    cin>>name;
    cout<<"enter mobile number"<<endl;
    cin>>mob;
    mp.insert({name,mob});
}
cout<<"\n results \n";
for (auto p:mp){
    cout<<p.first<<","<<p.second<<endl;
}
}