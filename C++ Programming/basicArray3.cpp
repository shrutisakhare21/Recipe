#include<iostream>
using namespace std;

int main(){
    int i;
    int marks[10]={95,90,31,25,100,50,65,89,97,30};
    for(i=0;i<10;i++){
        if(marks[i]<35){
         cout<<i<<endl;
      }
    }  
    return 0;
}