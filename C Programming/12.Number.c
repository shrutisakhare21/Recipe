#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=4;i++){
        for(j=1;j<=4;j++){
            printf("%d",j);   //j print kela karn j chi value change hote throughout execution.
        }printf("\n");
    }
    return 0;
}