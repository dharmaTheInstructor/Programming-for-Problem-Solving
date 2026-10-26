
#include<stdio.h>
#define X 10
int main(){
 int num1=12;// variable
 const int num2=16;//constant variable 
 num1=num1+X;
 //num2=num2+X;
 printf("NUM1 after modification=%d",num1);
 printf("\nNUM2 after modification=%10d",num2+X);
 return 0;
}
