#include<stdio.h>
int main(){
    int marks,maths,science;
    printf("Enter Your Marks\n");
    scanf("%d",&marks);
     if(marks>=35){
        printf("PASS\n");
    }
       else printf("FAIL\n");
    printf("enter maths\n");
    scanf("%d",&maths);
    if(maths>=35){
        printf("You are getting 35 as a cash price\n");
    }
    printf("enter science\n");
    scanf("%d",&science);
    if(science>=35){
        printf("You are getting 35 as a cash price\n");
    }
   else if(maths>=35 && science>=35)
        printf("You are getting 45 as a cash price\n");
    return 0;
}
//getting 1 error here.as when condn 3 satisfies then it should print only third.// sc