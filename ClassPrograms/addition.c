#include<stdio.h>
void main(){
    int num1=12,num2=16,num3;
    printf("Enter Two integer values:");
    scanf("%d%d",&num1,&num2);
    num3=num1+num2;
    printf("Sum of %d and %d=%d",num1,num2,num3);
}