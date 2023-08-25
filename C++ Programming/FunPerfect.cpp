#include<iostream>
using namespace std;

bool isPerfect(int n) {
    int sum=0;
     for(int i=1;i<=n/2;i++){
    if(n%i==0){
         sum+=i;
   }
     }
     return (sum==n);
}

int main(){
    
     int n,i;
     cin>>n;
    int sum=0;
    if(isPerfect(n)){
        cout<<"perfect";
    }else{
        cout<<"not perfect";
    }
    return 0;
}
