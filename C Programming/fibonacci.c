#include<stdio.h>
int main(){
    int fibonacci;
    int num1=0;
    int num2=1;
    int i;
    for(i=0;i<=6;i++){
   fibonacci=num1+num2;
    printf("%d\n",fibonacci);
    num1=num2;
    num2=fibonacci;
    }
}