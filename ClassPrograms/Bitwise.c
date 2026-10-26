#include<stdio.h>
void main(){
 int num1,num2;
 printf("Enter two integers:");
 scanf("%d%d",&num1,&num2);
 printf("Bitwise AND=%d",num1&num2);
 printf("\nBitwise OR=%d",num1|num2);
 printf("\nBitwise XOR=%d",num1^num2);
 printf("\nBitwise ~=%d",~num1);
 printf("\nBitwise LS=%d",num1<<num2);
 printf("\nBitwise RS=%d",num1>>num2);
}