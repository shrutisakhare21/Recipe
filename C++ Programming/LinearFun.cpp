#include<iostream>
using namespace std;
 
 bool Linear(int arr[],int key){
   for(int i=0;i<5;i++){
    if(key==arr[i]){
        return 1;
    }else{
        return 0;
    }
   }
 }

int main(){
    int key;
    cin>>key;
    int arr[5];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    bool search=Linear(arr,key);
    if(Linear){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
    return 0;
}
