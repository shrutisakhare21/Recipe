#include<iostream>
using namespace std;

void swap(int arr[]){
    int temp;
    temp=arr[0];
    arr[0]=arr[1];
    arr[1]=temp;
  return;
}

int main(){
    int arr[2]={2,3};
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    swap(arr);
    cout<<"After Swap"<<endl;
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    return 0;
}