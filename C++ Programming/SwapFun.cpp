#include<iostream>
using namespace std;

void swap(int *a,int *b){
    int temp=*b;
    *b=*a;
    *a=temp;
}                                                                                


int main(){
    int a=2;
    int b=3;
  swap(&a,&b);
  cout<<a<<endl;
  cout<<b<<endl;
    return 0;
}