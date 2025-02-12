#include<iostream>
using namespace std;
#include<algorithm>
#include<forward_list>
#include <vector>


int main(){


list<int>f1;
f1.push_front(10);
f1.push_front(10);f1.push_front(10);
f1.push_front(10);
f1.push_front(10);
f1.push_back(10);

for (auto p:f1){

cout<<p<<"\t";
}
}


