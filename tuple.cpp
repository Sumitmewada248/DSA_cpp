#include<iostream>
using namespace std;
#include<vector>
#include<tuple>



int main(){

/*
    tuple<int,string,int>tp{101,"ravie",15
    tp=make_tuple(102,"sunny",20);
    cout<<get<0>(tp)<<endl;
     cout<<get<1>(tp)<<endl;
      cout<<get<2>(tp)<<endl;
*/

vector<tuple<int,string,string>>v;
int rec,roll;
string name,city;
cout<<"enter how many recodes \n";
cin>>rec;
for (int i=0;i<rec;i++){
    cout<<"enter roll no \n";
    cin>>roll;
     cout<<"enter name \n";
    cin>>name;
     cout<<"enter city \n";
    cin>>city;
    v.push_back({roll,name,city});
}
cout<<"\n Store data \n";
for (auto p:v)
{

    cout<<get<0>(p)<<","<<get<1>(p)<<","<<get<2>(p)<<"\n";
}






}
