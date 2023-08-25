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
    int chairs;
    if(X>Y){
    chairs=X-Y;
    cout<<chairs<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
    }
	return 0;
}