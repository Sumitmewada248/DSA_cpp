#include<bits/stdc++.h> // its header file for all library

using namespace std;

void revq(queue<int>q)

{
    stack<int>s;

    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
    cout<<s.top()<<" ";
        s.pop();

    }
}

int main(){


    vector<int>v{2,34,1,6,7,8};
    queue<int>q;
    for(auto p:v)
    {
        q.push(p);
    }
    cout<<q.front();
}

