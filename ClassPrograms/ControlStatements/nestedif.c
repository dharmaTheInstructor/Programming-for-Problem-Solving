// c program for Nested-if()
#include<stdio.h>
void main(){
    int num1,num2,num3;
    printf("Enter three integer values:");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2){
        printf("\nEntered into Outer True Block");
        if(num1>num3){
           printf("\n%d is bigger than %d and %d",num1,num2,num3 );
        }
        else{
          printf("\n%d is bigger than %d and %d",num3,num1,num2 );  
        }
         printf("\nExited from Outer True Block");
    }
    else{
        printf("\nEntered into Outer Else Block");
        if(num2>num3){
            printf("\n%d is bigger than %d and %d",num2,num1,num3 );
        }
        else{
            printf("\n%d is bigger than %d and %d",num3,num1,num2 );
        }
         printf("\nExited from Outer Else Block");
    }
     printf("\nBYE");
}
