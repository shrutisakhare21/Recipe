#include<iostream>
using namespace std;

int main(){
    int i;
    int arr[10]={-882,0,-1,7,5,-99,33,22,12,-67};
    int min=arr[0];
    for(i=0;i<=10;i++){
  if(min>arr[i]){
    min=arr[i];
    }
  }
 cout<<min<<endl;
return 0;
}