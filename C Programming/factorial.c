#include<stdio.h>
int main(){
    int number,fact=1,i;
    printf("Enter a number\n");
    scanf("%d",&number);
    for(i=1;i<=number;i++){
        fact*=i;
    }
        printf("%d",fact);
    
}