#include <iostream>
using namespace std;
int main() {
	int X1,X2,Y1,Y2;
    int X,Y;
	cin>>X1;
	cin>>Y1;
	cin>>X2;
	cin>>Y2;
	X=abs(X1-X2);
	Y=abs(Y1-Y2);
	if(X>Y){
	    cout<<X<<endl;
	}else{
	    cout<<Y<<endl;
	}
	return 0;
}  