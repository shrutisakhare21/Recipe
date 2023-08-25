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
        cout<<"Alice is taller than Bob"<<endl;
    }
    else{
        cout<<"Bob is taller than Alice"<<endl;
    }
    }
	return 0;
}
