#include<iostream>
using namespace std;

void SortArray(int array[]){
for(int i=0;i<5;i++){
    for(int j=i+1;j<5;j++){

        if(array[i]>array[j]){
        int temp=array[j];
        array[j]=array[i];
        array[i]=temp;
          }
      }
   }
}


void printArray(int array[]){
for(int i=0;i<5;i++){
    cout<<array[i]<<" ";
}  
}


int main(){
    int array[5]={4,3,1,9,0};
    SortArray(array);
    printArray(array);
    return 0;
}