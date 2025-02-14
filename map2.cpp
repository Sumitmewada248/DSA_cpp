#include<iostream>
using namespace std;
#include<map>
#include<vector>
#include<string>

/*
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

string s;
cout<<"enter name to search : ";
cin>>s;
if (mp.find(s)!=mp.end()){
    cout<<mp[s]<<endl;
}

else{
    cout<<"record not found"<<endl;
}
}
*/

int main(){
map<string,vector<int>>mp;
mp["roy"].push_back(123);
mp["roy"].push_back(456);
mp["roy"].push_back(789);
mp["doy"].push_back(1011);
mp["boy"].push_back(1011);
mp["boy"].push_back(1011);

for(auto p:mp){
    cout<<p.first<<endl;
    for(auto m:p.second){
        cout<<m<<endl;
    }
}
cout<<"\n";


}