#include<iostream>
using namespace std;
#include<array>

int main(){
    array<int,6>b{20,10,5,6,8,9};
    cout<<"size=" <<b.size()<<endl;

   /* for (int i=0;i<b.size();i++){

        cout<<b[i]<<"\t";

    }
    for(int i=0;i<6;i++)
    {
        cout<<b.at(i)<<"\t";

    }*/

    array<string,3>str{"hi","bi","ji"};
    array<char,5>arr{'a','b','c','d','e'}
    for(auto p:b){
        cout<<p<<"\t";
    }


        }
