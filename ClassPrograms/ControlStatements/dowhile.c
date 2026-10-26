#include<stdio.h>
void main(){
    int i,n,x;
    printf("Enter values for source and destination:");
    scanf("%d%d",&i,&n);
    do
    {
        printf("%d\t",i);
        i++;
    }while(scanf("%d",&x));
    printf("BYE");
}