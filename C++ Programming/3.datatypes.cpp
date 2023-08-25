#include <iostream>
#include <cstdio>
#include<iomanip>
using namespace std;

int main() {
    int p;
    long t;
    char b; //character should be in double quotes.
    float z;
    double x;
    cin>>p>>t>>b>>z>>x;
    cout<<p<<endl;
    cout<<t<<endl;
    cout<<b<<endl;
    cout<<fixed<<setprecision(3)<<z<<endl;
    cout<<fixed<<setprecision(9)<<x<<endl;
    return 0;
}