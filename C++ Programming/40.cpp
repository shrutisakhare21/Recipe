#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	cin>>a;
	cin>>b;
	cin>>c;
 if(a>=c && a>=b){
	cout<<a<<endl;
}else if(b>=c && b>=a){
    cout<<b<<endl;
}else{
    cout<<c<<endl;
}
	return 0;
}
