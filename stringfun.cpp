#include<iostream>
using namespace std;

int main(){
int n;
cout<<"enter size of string \n";
cin>>n;
cin.ignore();
char c[n];
cout<<"enter name \n";
cin.getline(c,n);
cout<<"name="<<c;


}
