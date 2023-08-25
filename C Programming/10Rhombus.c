#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=4;i++){
        for(j=1;j<=7;j++){
            if((i+j)>4 && (i+j)<9){
            printf("*");}
            else{
                printf(" ");
            }
        }printf("\n");
    }
    return 0;
}