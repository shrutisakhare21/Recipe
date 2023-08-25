#include<iostream>
using namespace std;

int square(int num){
    int square=num*num;
    return square;
}


int main(){
    int a;
    cin>>a;
    cout<<square(a)<<endl;
    return 0;
}