#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cin>>a>>b;
    temp=b;
    b=a;
    a=temp;
   cout<< "a = " << a << ", b = " << b << endl;
    return 0;
}