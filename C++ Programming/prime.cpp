#include<iostream>
using namespace std;

int main(){
int num,count=1;
cin>>num;

for(int i=2;i<=num;i++){
    if(num%i==0){
        cout<<"not prime"<<endl;
        count=0;
        break;
}
   }
    if(count==1){
        cout<<"prime"<<endl;
    }
return 0;
}