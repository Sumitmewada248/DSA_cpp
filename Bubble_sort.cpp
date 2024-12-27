#include<iostream>
using namespace std;

void bubble(int arr[],int l)
{
    int c;
for(int i=0;i<l;i++){
for(int j=0;j<l-i-1;j++){
c++;
if(arr[j]>arr[j+1]){
int tmp;
tmp=arr[j+1];
arr[j+1] ;
}
    }
}
}
int main(){


//Driver Code
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
    bubble(arr,r);
}
else{
    cout<<"not valid range";
}
}
