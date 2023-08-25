#include<stdio.h>
#include <stdlib.h>  
#include <sys/time.h>
#include <time.h>
int count1=0,count2=0;

void check(int prev, int curr){
    if(prev==1 && curr==2) count2++;
    else if(prev==1 && curr==3)  count1++;
    else if(prev==2 && curr==3)  count2++;
    else if(prev==2 && curr==1)  count1++;
    else if(prev==3 && curr==2)  count1++;
    else if(prev==3 && curr==1)  count2++;
}

int main(){
    int guess,i;
    int prev,curr;
    printf("1. Stone\n");
     printf("2. Paper\n");
    printf("3. Scissor\n");
    srand(time(NULL));
    for(i=0;i<1;i++){
        printf("Enter a number ");
        scanf("%d",&guess);
        for(int j=0;j<2;){
            if(j==1){
                guess = (rand() % (3 - 1 + 1)) + 1;
            }
            switch(guess){
                case 1:
                    curr=1;
                    printf("Stone\n");
                    if(j==1){
                        check(prev,curr);
                    }
                    j++;
                    break;
                case 2:
                    curr=2;
                    printf("Paper\n");
                    if(j==1){
                        check(prev,curr);
                          }
                    j++;
                    break;
                case 3:
                    curr=3;
                    printf("Scissor\n");
                    if(j==1){
                        check(prev,curr);
                    }
                    j++;
                    break;
                default:
                    printf("wrong entry \n");
                    break;
                     } 

            prev=curr;
        }
    }
    if(count1>count2){
        printf("Player 1 won the game\n");
    }
    else if(count2>count1){
        printf("Computer won the Game\n");
    }
    else{
        printf("Match Draw \n");
    }
}