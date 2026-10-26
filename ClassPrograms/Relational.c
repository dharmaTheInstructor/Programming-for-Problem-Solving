#include<stdio.h>
void main(){
 int num1,num2;
 printf("Enter two integer values:");
 scanf("%d%d",&num1,&num2);
 printf("Lessthan=%d",num1<num2);
 printf("\nGraterthan=%d",num1>num2);
 printf("\nLessthan or Equals=%d",num1<=num2);
 printf("\nGraterthan or Equals=%d",num1>=num2);
 printf("\nEquals=%d",num1==num2);
 printf("\nNot Equals=%d",num1!=num2);
}