#include<iostream>
using namespace std;

int divide(int arr[],int low,int high){
    int pv=arr[low];
    int i=low+1;
    int j=high;
    int tmp;
    do{
        while(arr[i]<pv)
        {
            i++;
        }
        while(arr[j]>pv)
        {
            j--;
        }
        if(i<j)
        {
            tmp=arr[i];
            arr[i]=arr[j];
            arr[j]=tmp;
        }
    }
    while(i<j);
    tmp=arr[j];
    arr[j]=arr[low];
    arr[low]=tmp;
    return j;


    
}

void qsort(int arr[],int low,int high){
    int pivot;
    if(low<high){
        pivot=divide(arr,low,high);
        qsort(arr,low,pivot-1);
        qsort(arr,pivot+1,high);
    }
    
}


int main(){

int arr[]={8,2,3,1,5,9};
int s=sizeof (arr)/sizeof (arr[0]);
for (int i=0;i<s;i++)
{
    cout<<arr[i]<<"\t";

}
qsort(arr,0,s-1);
cout<<"\n";

for (int i=0;i<s;i++)
{
    cout<<arr[i]<<"\t";
}
}