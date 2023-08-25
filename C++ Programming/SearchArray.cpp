#include<iostream>
using namespace std;


bool linear(int array[],int k){
    for(int i=0;i<5;i++){
        if(k==array[i]){
          return i;
        }
    }
  return 0;
    
}


int main(){
    int k,i;
    cin>>k;
    int array[5]={1,2,3,4,5};
    bool search=linear(array,k);
    if(search){
        cout<<search<<endl;
    }else{
        cout<<"no"<<endl;
    }
    return 0;
}