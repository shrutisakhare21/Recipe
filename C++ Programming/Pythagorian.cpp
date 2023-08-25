#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;                            
    int v=a*a;
    int w=b*b;
    int n=c*c;
    if((v+w==n) || (v+n==w) || (w+n==v)){
        cout<<"Pythagorian Triplet"<<endl;
    }else {
         cout<<"Not a Pythagorian Triplet"<<endl;

    }
    return 0;
}