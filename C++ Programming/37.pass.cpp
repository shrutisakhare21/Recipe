#include <iostream>
using namespace std;

int main() {
   int t,i;
    cin>>t;
    for(i=1;i<=t;i++){ 
        int N,X,P,T;
        cin>>N;
        cin>>X;
        cin>>P;
        T=((3*X)+(X-N));
        if(T>P){
            cout<<"pass"<<endl;
        }
        else{
            cout<<"fail"<<endl;
        } }
	return 0;
}