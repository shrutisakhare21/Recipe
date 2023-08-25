#include<iostream>
using namespace std;

void swap(int *x,int *y){
  int temp;
   temp=*y;
   *y=*x;
   *x=temp;
}



int main(){
    int a=2;
    int b=3;
    swap(&a,&b);
 cout<<a<<endl;
 cout<<b<<endl;
    return 0;
}