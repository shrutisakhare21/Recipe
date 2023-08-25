#include<iostream>
using namespace std;

int sum(int arr[]){
    int sum=0;
    int i;
    for(i=0;i<5;i++){
         sum+=arr[i];
    }
  return sum;
}


int main(){
    int arr[5],i;
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    cout<<sum(arr)<<endl;
    return 0;
}