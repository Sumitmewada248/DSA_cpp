#include<iostream>
using namespace std;

void bubble(int arr[],int l)
{

}
int main(){

int r;
cout<<"enter size of array\n";
cin>>r;
int arr[r];
if (r>=0 && r<20){
cout<<"enter the  ranges\n";
    for(int i=0;i<r;i++)
    {
        cin>>arr[i];

    }
}
else{
    cout<<"not valid range";
}
bubble(arr,r);
}