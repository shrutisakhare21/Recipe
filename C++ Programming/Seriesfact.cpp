#include <iostream>
using namespace std;

int main() {
	int n,i,ans,factorial=1;
    cin>>n;
	for(i=1;i<=n;i++){
	  factorial*=i;
	 ans+=factorial(i)/i;
	} 
	cout<<ans<<endl;
	return 0;
}                