#include<iostream>
using namespace std;

int  main(){
    int a,b;
    cin>>a>>b;
    int i;
    int sum=0;
    int add=0;
    sum=a+b;
    int arr[10]={6,2,5,5,4,5,6,2,7,6};
    if(sum%10==0 ||sum%10==1||sum%10==2||sum%10==3||sum%10==4||sum%10==5||sum%10==6||sum%10==7||sum%10==8||sum%10==9 ){
   add+=arr[i];
        cout<<arr[i];
    }
    cout<<add;
    return 0;
}