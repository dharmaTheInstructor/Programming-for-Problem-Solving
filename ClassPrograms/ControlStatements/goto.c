#include<stdio.h>
int main(){
    int i;
    printf("Enter i:");
    scanf("%d",&i);
    if(i==5)
     goto gmrit;
    printf("\nBye....!");
    return 0;
    gmrit: printf("\nHello GMRIT");
    return 0;
}