#include<iostream>
using namespace std;

int main(){
int i;
int arr[70]={1,2,3,4,5,6,7,8};
 for(i=0;i<=7;i++){
  if(i%2==0){
    cout<<arr[i]+10<<endl;
     }
     else{
        cout<<arr[i]*2<<endl;
     }
  }
return 0;
}
/*
int main(){
int i;
int a[69];
for(i=0;i<9;i++){
    cin>>a[i];
}
for(i=0;i<5;i++){
    cout<<a[i]<<" ";
}
return 0;
}
*/