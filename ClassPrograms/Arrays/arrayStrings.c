#include<stdio.h>
void main(){
    //char str[5][50]={"GMRIT","GMRITDU","SRIKAKULAM","AP","532001"};
    char str[5][50];
    int i;
    printf("Enter 5 strings:");
    for(i=0;i<=4;i++)
        scanf("%s",str[i]);
    printf("Given Strings are:");
    for(i=0;i<=4;i++)
        printf("\n%s",str[i]);
}