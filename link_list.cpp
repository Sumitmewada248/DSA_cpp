
#include<iostream>
using namespace std;
#include<algorithm>
#include<forward_list>
#include <vector>


int main(){




forward_list<int> f1{3,5,8,2,9,7,4,1};


//forward_list<int> f2{30,20,25,85,47,96};

for(auto p:f1)
{
    cout<<p<<"\t";
}

cout<<"\n";

/*
for (auto p:f2)
{

    cout<<p<<"\t";
}
f1.sort();
f2.sort();

f1.merge(f2);
cout<<"\n after merge \n";

for(auto p:f1){
    cout<<p<<"\t";
}
*/


///LAMEDA FUNCTION

//cout<<[](int a,int b){return a>b;}(200,30);

cout<<"remove the number is greater than 5 \n ";
f1.remove_if([](int a) {return a>5;});


for(auto p:f1){
    cout<<p<<"\t";
}
cout<<endl;

int n;
cout<<"enter no \n";

cin>>n;


cout<<"remove the number is greater than the input \n";
f1.remove_if([n](int a) {return a>n;});
for(auto p:f1){
    cout<<p<<"\t";
}




























}
