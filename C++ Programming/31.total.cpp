#include <iostream>
using namespace std;

int main() {
	int rain, x;
	cin>>x;
	if(rain<3){
	    cout<<"light"<<endl;
	}
	else if(rain>=3 && rain<7){
	    cout<<"moderate"<<endl;
	}else if(rain>=7){
	    cout<<"heavy"<<endl;
	}
	return 0;
}
