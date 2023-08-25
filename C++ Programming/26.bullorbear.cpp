#include <iostream>
using namespace std;

int main() {
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++){
	int X;
    int Y;
    cin>>X;
    cin>>Y;
    if(X<Y){
        cout<<"profit"<<endl;
    }
    else if(X>Y){
        cout<<"loss"<<endl;
    }
    else{
        cout<<"neutral"<<endl;
    }}
	return 0;
}
