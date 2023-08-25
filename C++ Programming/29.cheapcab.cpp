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
    if(X>Y){
        cout<<"SECOND"<<endl;
    }
    else if(X<Y){
        cout<<"FIRST"<<endl;
    }
    else{
        cout<<"ANY"<<endl;
    }}
	return 0;
}
