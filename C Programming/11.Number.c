#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=4;i++){
        for(j=1;j<=3;j++){
            printf("%d",i);   //i print kela karn i chi value change hoth  nahi throughout execution.
        }printf("\n");
    }
    return 0;
}