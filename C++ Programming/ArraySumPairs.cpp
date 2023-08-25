#include<iostream>
using namespace std;

int main(){
     int arr[8]={1,2,3,4,5,6,7,8};
   int x=12,i,j;
 int count=0;
for(i=0;i<7;i++){
    for(j=0;j<7;j++){
     if(((arr[i]|=arr[j]))){
if((arr[i]+arr[j])==x){
     count++;
     }
    }
  }
}
cout<<count<<" ";

return 0;
}