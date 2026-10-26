#include<stdio.h>
void main(){
    int x;
    printf("Enter value for x:");
    scanf("%d",&x);
    printf("%d%d%d%d",++x,x,x--,++x);
}