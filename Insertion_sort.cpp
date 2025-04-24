#include<iostream>
using namespace std;

void    insrt(int arr[],int s){
    for(int i=1;i<s;i++){
        int ram=i;
        while(ram>0 && arr[ram-1]>arr[ram]){
            int tmp=arr[ram-1];
            arr[ram-1]=arr[ram];
            arr[ram]=tmp;
            ram--;
}
    }
}

int main(){
    int arr[]={3,1,4,2,6};
     int s=sizeof(arr)/sizeof(arr[0]);
     cout<<"Before sorting"<<endl;

    for (int i=0;i<s;i++){
    cout<<arr[i]<<" "<<endl;
    }
    cout<<"after sorting"<<endl;

    insrt(arr,s);
    for (int i=0;i<s;i++){
        cout<<arr[i]<<" "<<endl;
    }



}