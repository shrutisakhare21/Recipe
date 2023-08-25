#include <iostream>
using namespace std;

int main() {
int t,i;
cin>>t;
for(i=1;i<=t;i++){ 
	int N,M,K,T;
    cin>>N;
    cin>>M;
    cin>>K;
    T=M-K;
    if(T>=N){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }}
	return 0;
}
