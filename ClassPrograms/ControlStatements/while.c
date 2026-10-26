#include<stdio.h>
void main(){
  int i,n,x;
  printf("Enter an integer for source and destination:");
  scanf("%d%d",&i,&n);
  while(x=0){
   printf("%d\t",i);
   i=i+5;
  }
  printf("\nBYE");
}