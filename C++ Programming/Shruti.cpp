#include<iostream>
using namespace std;
 class student
 {
    public:
    int best=69;
 };

 class diploma:public student
 {
    public:
    int d=8;
 };

 int main(){
    diploma p;
    cout<<"student is "<<p.best<<endl;
    cout<<"diploma is "<<p.d<<endl;
    return 0;
 };