#include<iostream>
using namespace std;

int Even(int arr[]) {
    int i;
    for(i=0;i<7;i++){
        if(i%2==0){
           arr[i]=arr[i]+10;
        }else{
            arr[i]=arr[i]*2;        }
    }
    return 0;
}

int main(){
  int arr[7]={1,2,3,4,5,6,7};
  Even(arr[i]){
    cout<<arr[i];
  }
  return 0;
}