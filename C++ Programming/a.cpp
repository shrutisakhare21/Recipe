#include<iostream>
using namespace std;

int main(){
   int rows,i,j,sub1,sub2;
   cin>>rows;

int matrix[rows][2];

for(i=0;i<rows;i++){
    for(j=0;j<2;j++){
        cin>>matrix[i][j];
    }
}
   sub1=matrix[i]-matrix[j];
   sub2=matrix[j]-matrix[i];

for(i=0;i<rows;i++){
    for(j=0;j<2;j++){
        if(matrix[i]>matrix[j]){
            cout<<"1"<<" "<<sub1<<endl;
        }else{
            cout<<"2"<<" "<<sub2<<endl;
        }
    }
    cout<<endl;
}
    return 0;
}