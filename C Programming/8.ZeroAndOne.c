#include<stdio.h>
int main(){
    int i,j;
       int a;
    for(i=1;i<=5;i++){
        if(i%2==0)a=0;
        else a=1;
        for(j=1;j<=i;j++){
                printf("%d",a);
            if(a==0)a=1;
            else a=0;
            }printf("\n");
    }
    return 0;
}