#include<iostream>
using namespace std;
#include<queue>

//#include<bits/stdcc++.h>  its header file for all library
//Queue: It follows FIFO;
// Insert (push()) the data from rear
//Delete(pop())from front;
//Having empty() & front()



int main(){

queue<int>q;
q.push(20);
q.push(4);
q.push(10);
q.push(58);
q.push(5);

q.pop();
q.pop();

cout<<"\n" <<q.front();

while(!q.empty())
{
    cout<<q.front()<<"\n";
    q.pop();
}

deque<int>dq;
dq.push_front(23);
dq.push_front(54);
dq.push_front(56);
dq.push_front(05);
dq.push_front(99);

cout<<"\n front = "<<dq.front();
cout<<"\n back = "<<dq.back();
dq.push_back(100);
cout<<"\n back= "<<dq.back();
dq.pop_back();
cout<<"\n back= "<<dq. back();

dq.pop_front();
cout<<"\n front del "<<dq.front();
}
