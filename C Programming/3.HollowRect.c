#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=6;i++){
        for(j=1;j<=4;j++){
            if(i==1 || j==1){
                printf("*");
            }else if(i==6 ||j==4){
                printf("*");
            }
            else {
printf(" ");
            }

        }printf("\n");
    }
    return 0;
}