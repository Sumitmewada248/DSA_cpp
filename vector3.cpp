#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main(){

    vector<int>v;
    int sizes,n;
    cout<<"\n enter size \n";
    cin>>sizes;

    for (int i=0;i<sizes;i++){
        cout<<"\n enter value for" <<i<<"index \n";

    cin>>n;
    v.push_back(n);


    }
cout<<"result \n";
for(auto p:v){
    cout<<p<<"\t";
}
/*
vector<int>::iterator  it=v.begin();
v.erase(it+1);

cout<<"\n After delete \n";
for(auto p:v){
    cout<<p<<"\t";

}
v.insert(it+2,984);
cout<<" \n after insert \n";

for(auto p:v)
{
    cout<<p<<"\t";


}
*/

vector<int>::iterator  it=v.end();
v.erase(it-1);

cout<<"\n After delete \n";
for(auto p:v){
    cout<<p<<"\t";

}
}
