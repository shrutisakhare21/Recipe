#include <iostream>
using namespace std;

int main() {
     int i,t;
    cin>>t;
    for(i=1;i<=t;i++){
	int N;
    int M;
    int  SEAT;
    cin>>N;
    cin>>M;
    SEAT=((N*5)+(M*7));
    cout<<SEAT<<endl;
    }
	return 0;
}
