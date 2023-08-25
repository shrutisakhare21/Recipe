#include <iostream>
using namespace std;
int main() {
        int X,Y;
        int G,B,R;
        cin>>X;
        cin>>Y;
    if(X==R || Y==R){
        cout<<R<<endl;
    }else if(X==B || Y==B){
        cout<<B<<endl;
    }else{
        cout<<G<<endl;
    }
	return 0;

}
