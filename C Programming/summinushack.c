#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int a=4;
    int b=3;
    int sum;
    int sub;
    float suma;
    float suba;
    float c=4.0;
    float d=2.8;
    sum=a+b;
    scanf("%d",&a);
    printf("%d\t",sum);
    scanf("%d",&a);
    sub=a-b;
     scanf("%d",&b);
    printf("%d\n",sub);
    suma=c+d;
    scanf("%f",&c);
    printf("%3.1f\t",suma);
    suba=c-d;
    scanf("%f",&d);
    printf("%3.1f\t",suba);
    return 0;
}