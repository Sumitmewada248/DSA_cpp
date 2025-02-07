#include<iostream>
#include<forward_list>
using namespace std;

int main(){
    forward_list<int>f1;
    f1.push_front(10);
    f1.push_front(4);
    f1.push_front(5);
    f1.push_front(21);
    f1.push_front(55);


for(auto p:f1){
    cout<<p<<"\t";
}
f1.pop_front();
cout<<"\n after delete \n";
for(auto p:f1){
    cout<<p<<"\t";
}

f1.push_front(800);
cout<<"\n after insertion \n";
for(auto p:f1){
    cout<<p<<"\t"<<endl;

}


for(auto it=f1.begin(); it!=f1.end();++it){
    cout<<*it<<endl;
}

}
