#include<bits/stdc++.h>
using namespace std;

int main(){
    int key,i;
    cin>>key;
    int array[5];
    cin>>array[0]>>array[1]>>array[2]>>array[3]>>array[4];
    for(i=0;i<5;i++){
        if (key==array[i]){
             cout<<array[i]<<endl;
        }
        else{
             cout<<"no"<<endl;
        }}
    return 0;
}