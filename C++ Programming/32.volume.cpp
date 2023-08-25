#include <iostream>
using namespace std;

int main() {
int t,i;
cin>>t;
for(i=1;i<=t;i++){
    int volume;
	int X,Y;
    cin>>X;
    cin>>Y;
    if(Y>X){
        volume=Y-X;
        cout<<volume<<endl;
    }
    else{
        volume=X-Y;
        cout<<volume<<endl;
    }
}
	return 0;
}
