
#include <stdio.h>
#include <string.h>

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    char c[100];
    printf("Hello, World!\n");
    printf("Welcome to C programming\n");
    scanf("%[^\n]%*c",c);
    printf("%s",c);
    return 0 ;
    }