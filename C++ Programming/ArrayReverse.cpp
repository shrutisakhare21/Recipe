#include<iostream>
using namespace std;

int main(){
    int a[5];
    cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
    int i;
    for(i=4;i>=0;i--){
       cout<<" "<<a[i]<<endl;
    }
   return 0;
}