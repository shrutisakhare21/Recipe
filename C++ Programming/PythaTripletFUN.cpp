#include<iostream>
using namespace std;

bool isPythaTriplet(int a,int b,int c){
    if(((a*a)+(b*b)==(c*c)) || (b*b)+(c*c)==(a*a) || ((c*c)+(a*a)==(b*b))){
        return 1;
    }else{
        return 0;
    }
}


int main(){
    int a,b,c;
    cin>>a>>b>>c;
     if(isPythaTriplet(a,b,c)){
         cout<<"Triplet"<<endl;
    }else{
    cout<<"Not a Triplet"<<endl;
    }
    return 0;
}
