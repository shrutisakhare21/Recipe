#include<iostream>
#include <cmath>

using namespace std;

bool is_prime(int num){
    if(num<=1){
        return 0;
    }
 for(int i=2;i<=sqrt(num);i++){
    if(num%i==0){
    return 0;
    }}
return 1;
}

int main(){
    int num;
    cin>>num;
 if(is_prime(num)){
       cout<<"prime";
    }else{
        cout<<"not prime";
    }
     return 0;
}