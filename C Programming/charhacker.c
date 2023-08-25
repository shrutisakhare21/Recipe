#include <stdio.h>
#include<string.h>
int main() {
    char ch;
    char s[100];
    char arr[100];
    scanf("%c",&ch);
    scanf("%s",s);
    scanf("\n%[^\n]%*c", arr);
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s",arr);
    return 0;
