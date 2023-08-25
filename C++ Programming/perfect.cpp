#include<iostream>
using namespace std;
int main(){
    
     int n,i;
     cin>>n;
     int p=n/2;
    int sum=0;
    for(int i=1;i<=p;i++){
    if(n%i==0){
         sum+=i;
   }else{
    cout<<"not perfect"<<endl;
   }

if(sum==n){
    cout<<"perfect";
}
   
    }
    return 0;
}