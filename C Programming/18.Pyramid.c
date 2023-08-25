#include<stdio.h>
int main(){
    int i,j,k;
    int nst=1;
    for(i=1;i<=4;i++){
        for(j=1;j<=4-i;j++){
            printf(" ");   
        }for(k=1;k<=nst;k++)
        {
            printf("*");
        }nst=nst+2;
        printf("\n");
    }
    return 0;
}