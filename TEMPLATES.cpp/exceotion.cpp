#include <iostream>

using namespace std;
int main(){
int a,b,c;
cin>>a>>b;
try{
    if(b==0){
    throw b;
}
else{
    c=a/b;
    cout<<"div is "<<c;
}
}
catch(int x){
    cout<<"stfu";
}

return 0;
}