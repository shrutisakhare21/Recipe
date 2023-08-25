#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>c && c+b>a && a+c>b ){
        cout<<"Valid triangle"<<endl;
    }else{
        cout<<"not a valid triangle"<<endl;
    }
    return 0;
}