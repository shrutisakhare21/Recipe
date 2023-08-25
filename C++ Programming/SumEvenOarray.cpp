#include<iostream>
using namespace std;

int main(){
    int i,sum=0,summ=0,d;
    int arr[70]={1,5,5,7,9,11};
    for( i=0;i<6;i++){
        if(i%2==0){
            sum+=arr[i];
        }else{
            summ+=arr[i];
        }
    }d=sum-summ;
    cout<<d<<endl;
    
    return 0;
}