#include <iostream>
using namespace std;

int main() {
int i,t;
cin>>t;
for(i=1;i<=t;i++){ 
   int x,y,z;
 cin>>x>>y>>z;
int u=x/3;
int o=u*z;
int w=x*y;
if(x<3){
    cout<<x*y<<endl;
}else if(x>3){
    cout<<w+o<<endl;
}
	return 0;
}
