#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=4;i+2){
        for(j=1;j<=4-i;j+2){
            printf("*");
        }printf("\n");
    }
    return 0;
}