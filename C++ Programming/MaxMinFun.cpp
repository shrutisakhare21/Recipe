#include <iostream>
using namespace std;
 int max(int a,int b,int c,int d){
     if(a>b && a>c && a>d){
         return a;
     }else if(b>c && b>a && b>d){          
         return b;
     }else if(c>a && c>b && c>d){ 
         return c;
     }else {
         return d;
     }
 }



 int min(int a,int b,int c,int d){
     if(a<b && a<c && a<d){
         return a;
     }else if(b<c && b<a && b<d){          
         return b;
     }else if(c<a && c<b && c<d){ 
         return c;
     }else {
         return d;
     }
 }
 


int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int m=max(a,b,c,d);
    cout<<"max is "<<m<<endl;
    int n=min(a,b,c,d);
    cout<<"min is "<<n<<endl;
    return 0;
}