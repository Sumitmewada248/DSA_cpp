#include<iostream>
using namespace std;



int main(){

int arr[]={8,2,3,1,5,9};
int s=sizeof (arr)/sizeof (arr[0]);
for (int i=0;i<s;i++)
{
    cout<<arr[i]<<"\t";

}
}
