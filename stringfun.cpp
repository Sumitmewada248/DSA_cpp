#include<iostream>
#include<algorithm>
using namespace std;

int main(){
/*int n;
cout<<"enter size of string \n";
cin>>n;

cin.ignore();?///It can terminate the function so use the .ignore
char c[n];

cout<<"enter name \n";
cin.getline(c,n);
cout<<"name="<<c;*/


/*
string name;
cout<<"enter name";
getline(cin,name); // store space along wit size
//cin.getline(variable,size); // char datatype along
cout<<"name= "<<name;na,
*/


/*
string name="cybrom";
cout<<name;
name.push_back('b');
cout<<"\n"<<name;
name.pop_back();
cout<<"\n after delete" <<"\n "<<name<<endl;
name.pop_back();
cout<<"\n"<<name<<endl;
*/


// in place of loop
string name="cybrom";
int arr[5]={3,1,5,8,9};
for (auto p:name){
    cout<<p<<endl;
}

sort(name.begin(),name.end());
cout<<name;
}
























