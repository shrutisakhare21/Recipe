#include <iostream>
using namespace std;

int main() {
     int i,t;
    cin>>t;
    for(i=1;i<=t;i++){
    int X;
    int Y;
    int Z;
    cin>>X;
    cin>>Y;
    cin>>Z;
	if((X>=Y)&&(X>=Z)){
        cout<<X<<endl;
    }
    else if((Y>=Z)&&(X>=Z)){
        cout<<Y<<endl;
    }else {
        cout<<Z<<endl;
    }
    }
	return 0;
}
